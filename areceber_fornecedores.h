/*Das compras efetuadas pela padaria junto aos fornecedores s˜ao registrados o n´umero da nota fiscal, o
fornecedor, a data da compra, o tipo de produto comprado e a quantidade. Para simplificar, assuma que
para cada tipo de produto comprado ´e gerada uma entrada separad*/
struct compra_fornecedor{
    char nf[10], data[11];
    int id_fornecedor, id_produto, qnt_produto, vazio;
    float valor_compra;
}id_compra_fornecedor[100];

int areceber_fornecedor(){
    printf("\nDigite o numero da nota fiscal: ");
        scanf(" %10[^\n]", id_compra_fornecedor[id].nf);

    do{
        printf("\n\nFornecedores cadastrados\n");
        //mostrando fornecedores
            for (int i=0; i <=100; i++){
                if (id_fornecedor[i].vazio == 1)
                    printf("ID: %i - %s\n", id_fornecedor[i].id, id_fornecedor[i].nome);
            }
            printf("\nDigite o id do fornecedor: ");
            //registrando fornecedor
            scanf("%i", &id_compra_fornecedor[id].id_fornecedor);
    }while (id_fornecedor[id_compra_fornecedor[id].id_fornecedor].vazio == 0);
    
    do{
        printf("\nPRODUTOS CADASTRADOS\n");
        for(int i = 0; i <= 100; i++)
            if(id_produto[i].vazio == 1)
                printf("ID: %i - %s - Valor de custo = RS %.2f - Estoque: %i\n", id_produto[i].id, id_produto[i].descricao, id_produto[i].valor_custo, id_produto[i].qnt_estoque);

        printf("\nDigite o codigo do produto: ");
            scanf("%i", &id_compra_fornecedor[id].id_produto);

    } while (id_produto[id_compra_fornecedor[id].id_produto].vazio == 0);

        printf("\nDigite quantidade do produto: ");
            scanf("%i", &id_compra_fornecedor[id].qnt_produto);

    //calculando valor compra
    id_compra_fornecedor[id].valor_compra = id_produto[id_compra_fornecedor[id].id_produto].valor_custo * id_compra_fornecedor[id].qnt_produto;

    //atualizando estoque
    id_produto[id_compra_fornecedor[id].id_produto].qnt_estoque += id_compra_fornecedor[id].qnt_produto;

    //atualizando saldo fornecedor
    id_fornecedor[id_compra_fornecedor[id].id_fornecedor].saldo += id_compra_fornecedor[id].valor_compra;

    printf("\nValor da compra: RS%.2f", id_compra_fornecedor[id].valor_compra); 

    printf("\nDigite a data da compra: ");
        scanf(" %11[^\n]", id_compra_fornecedor[id].data);   

}