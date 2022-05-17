struct vendas_fiado {

    int id, id_produto_vendido, vazio, qnt_vendida, id_cliente_venda_fiado, cliente_cpf_ou_cnpj;
    float valor_venda;
    char data_venda [10], forma_pagamento[8];

}id_vendas_fiado[200];

int add_vendas_fiado(int id){

    //recebendo dados do vendas_fiado
    id_vendas_fiado[id].id = id;
    id_vendas_fiado[id].vazio = 1;
    strcpy(id_vendas_fiado[id].forma_pagamento, "Fiado");

    //registrando o cliente fiado
    do{
        printf("\nCliente com CPF ou CNPJ?");
        printf("\n(1) - CPF");
        printf("\n(2) - CNPJ\n");
        scanf("%i", &id_vendas_fiado[id].cliente_cpf_ou_cnpj);
    }while (id_vendas_fiado[id].cliente_cpf_ou_cnpj != 1 && id_vendas_fiado[id].cliente_cpf_ou_cnpj != 2);


    printf("\n\nClientes cadastrados\n");
        for (int i=0; i <=100; i++){
            if (id_vendas_fiado[id].cliente_cpf_ou_cnpj == 1)
                if (id_cpf[i].vazio == 1)
                    printf("ID: %i - %s\n", id_cpf[i].id, id_cpf[i].nome);
            else
                if (id_cnpj[i].vazio == 1)
                    printf("ID: %i - %s\n", id_cnpj[i].id, id_cnpj[i].nome);
        }
        printf("\nDigite o id do cliente: ");
        scanf("%i", &id_vendas_fiado[id].id_cliente_venda_fiado);

    //mostrando produtos
    printf("\nPRODUTOS CADASTRADOS\n");
    for(int i = 0; i <= 100; i++)
        if(id_produto[i].vazio == 1 && id_produto[i].qnt_estoque >= 1)
            printf("ID: %i - %s - Valor = RS %.2f - Estoque: %i\n", id_produto[i].id, id_produto[i].descricao, id_produto[i].valor_venda, id_produto[i].qnt_estoque);

    do{
        printf("\nDigite o codigo do produto: ");
            scanf("%i", &id_vendas_fiado[id].id_produto_vendido);
        printf("\nDigite quantidade do produto: ");
            scanf("%i", &id_vendas_fiado[id].qnt_vendida);
    } while (id_produto[id_vendas_fiado[id].id_produto_vendido].qnt_estoque < id_vendas_fiado[id].qnt_vendida);

    //valor da venda
    id_vendas_fiado[id].valor_venda =  id_produto[id_vendas_fiado[id].id_produto_vendido].valor_venda * id_vendas_fiado[id].qnt_vendida;

    printf("\n\nValor total = RS %.2f", id_vendas_fiado[id].valor_venda);

    printf("\nDigite a data da venda: ");
        scanf("%s", id_vendas_avista[id].data_venda);

    //lancando despesa para o cliente
    if (id_vendas_fiado[id].cliente_cpf_ou_cnpj == 1)
        id_cpf[id_vendas_fiado[id].id_cliente_venda_fiado].saldo += id_vendas_fiado[id].valor_venda;
    else
        id_cnpj[id_vendas_fiado[id].id_cliente_venda_fiado].saldo += id_vendas_fiado[id].valor_venda;

    //atualizando estoque
    id_produto[id_vendas_fiado[id].id_produto_vendido].qnt_estoque -= id_vendas_fiado[id].qnt_vendida;
}

