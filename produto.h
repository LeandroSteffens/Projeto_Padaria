struct produto {

    int id, vazio, qnt_estoque, estoque_min, qnt_vendida;
    float valor_venda, valor_custo, lucro;
    char descricao [100];

}id_produto[100];

int add_produto(){
    int id;

    //verificando id
    while (id_produto[id].vazio == 1)
        id++;

    //recebendo dados do produto
    id_produto[id].id = id;
    id_produto[id].vazio = 1;
    printf("\nDigite a descricao do produto: ");
        scanf(" %100[^\n]", id_produto[id].descricao);
    printf("\nDigite a quantidade atual do estoque: ");
        scanf(" %100[^\n]", &id_produto[id].qnt_estoque);
    printf("\nDigite quantidade minima do estoque: ");
        scanf(" %100[^\n]", &id_produto[id].estoque_min);
    printf("\nDigite o valor de custo: ");
        scanf(" %100[^\n]", &id_produto[id].valor_custo);
    printf("\nDigite percentual de lucro: ");
        scanf(" %100[^\n]", &id_produto[id].lucro);

    //valor de venda
    id_produto[id].valor_venda = id_produto[id].valor_custo + (id_produto[id].valor_custo * (id_produto[id].lucro/100));
}
