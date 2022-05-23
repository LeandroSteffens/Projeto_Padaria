struct vendas_avista {

    int id, id_produto_vendido, vazio, qnt_vendida, id_forma_pagamento;
    float valor_venda, lucro_venda;
    char data_venda [10], forma_pagamento[20];

}id_vendas_avista[200];

int add_vendas_avista(int id){
    //recebendo dados do vendas_avista
    int opcao; char pagamento[30];
    id_vendas_avista[id].id = id;
    id_vendas_avista[id].vazio = 1;
    printf("\nDigite a forma de pagamento");
    printf("\n(1) - Dinheiro");
    printf("\n(2) - Cheque");
    printf("\n(3) - Cartao de debito");
    printf("\n(4) - Cartao de credito");
    printf("\n(5) - Ticket alimentacao\n");
    scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: 
            strcpy(id_vendas_avista[id].forma_pagamento, "Dinheiro");
            id_vendas_avista[id].id_forma_pagamento = 1;
            break;
        case 2: 
            strcpy(id_vendas_avista[id].forma_pagamento, "Cheque");
            id_vendas_avista[id].id_forma_pagamento = 2;
            break;
        case 3:
            strcpy(id_vendas_avista[id].forma_pagamento, "Cartao de debito");
            id_vendas_avista[id].id_forma_pagamento = 3;
            break;
        case 4: 
            strcpy(id_vendas_avista[id].forma_pagamento, "Cartao de credito");
            id_vendas_avista[id].id_forma_pagamento = 4;
            break;
        case 5: 
            strcpy(id_vendas_avista[id].forma_pagamento, "Ticket alimentacao");
            id_vendas_avista[id].id_forma_pagamento = 5;
            break;
        default:
            printf("\nOpcao invalida\n");
            add_vendas_avista(id);
            break;
        }
    //mostrando produtos
    printf("\nPRODUTOS CADASTRADOS\n");
    for(int i = 0; i <= 100; i++)
        if(id_produto[i].vazio == 1 && id_produto[i].qnt_estoque >= 1)
            printf("ID: %i - %s - Valor: RS %.2f  Estoque: %i\n", id_produto[i].id, id_produto[i].descricao, id_produto[i].valor_venda, id_produto[i].qnt_estoque);
    do{
        printf("\nDigite o codigo do produto: ");
            scanf("%i", &id_vendas_avista[id].id_produto_vendido);
        printf("\nDigite quantidade do produto: ");
            scanf("%i", &id_vendas_avista[id].qnt_vendida);
    } while (id_produto[id_vendas_avista[id].id_produto_vendido].qnt_estoque < id_vendas_avista[id].qnt_vendida);

    //valor da venda
    id_vendas_avista[id].valor_venda =  id_produto[id_vendas_avista[id].id_produto_vendido].valor_venda * id_vendas_avista[id].qnt_vendida;

    printf("\n\nValor total = RS %.2f", id_vendas_avista[id].valor_venda);

    printf("\nDigite a data da venda: ");
        scanf("%s", id_vendas_avista[id].data_venda);
    

    //atualizando estoque
    id_produto[id_vendas_avista[id].id_produto_vendido].qnt_estoque -= id_vendas_avista[id].qnt_vendida;

    //atualizando a quantidade vendida por pruduto
    id_produto[id_vendas_avista[id].id_produto_vendido].qnt_vendida += id_vendas_avista[id].qnt_vendida;

    //atualizando lucro da venda
    id_vendas_avista[id].lucro_venda = (id_vendas_avista[id].qnt_vendida * (id_produto[id_vendas_avista[id].id_produto_vendido].lucro/100));
}
