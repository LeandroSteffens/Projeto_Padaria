

void cadastros(){
    //clientes
    int aux = 1;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Cesar Filho");
    strcpy(id_cpf[aux].cpf, "00688888888");
    strcpy(id_cpf[aux].endereco, "ufmt");
    strcpy(id_cpf[aux].telefone, "6599999999");
    strcpy(id_cpf[aux].data_cadastro, "16/05/2022");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Leo Steffens");
    strcpy(id_cpf[aux].endereco, "ufmt2");
    strcpy(id_cpf[aux].telefone, "6599999889");
    strcpy(id_cpf[aux].data_cadastro, "16/04/2022");
    strcpy(id_cpf[aux].cpf, "00688888899");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Messi");
    strcpy(id_cpf[aux].cpf, "00688888888");
    strcpy(id_cpf[aux].endereco, "ufmt");
    strcpy(id_cpf[aux].telefone, "6599999999");
    strcpy(id_cpf[aux].data_cadastro, "16/05/2022");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Cristiano Ronaldo");
    strcpy(id_cpf[aux].cpf, "00688888888");
    strcpy(id_cpf[aux].endereco, "ufmt");
    strcpy(id_cpf[aux].telefone, "6599999999");
    strcpy(id_cpf[aux].data_cadastro, "16/05/2022");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Neymar");
    strcpy(id_cpf[aux].cpf, "00688888888");
    strcpy(id_cpf[aux].endereco, "ufmt");
    strcpy(id_cpf[aux].telefone, "6599999999");
    strcpy(id_cpf[aux].data_cadastro, "16/05/2022");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Ronaldinho");
    strcpy(id_cpf[aux].cpf, "00688888888");
    strcpy(id_cpf[aux].endereco, "ufmt");
    strcpy(id_cpf[aux].telefone, "6599999999");
    strcpy(id_cpf[aux].data_cadastro, "16/05/2022");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Pele");
    strcpy(id_cpf[aux].cpf, "00688888888");
    strcpy(id_cpf[aux].endereco, "ufmt");
    strcpy(id_cpf[aux].telefone, "6599999999");
    strcpy(id_cpf[aux].data_cadastro, "16/05/2022");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Maradona");
    strcpy(id_cpf[aux].cpf, "00688888888");
    strcpy(id_cpf[aux].endereco, "ufmt");
    strcpy(id_cpf[aux].telefone, "6599999999");
    strcpy(id_cpf[aux].data_cadastro, "16/05/2022");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Marilia Mendoca");
    strcpy(id_cpf[aux].cpf, "00688888888");
    strcpy(id_cpf[aux].endereco, "ufmt");
    strcpy(id_cpf[aux].telefone, "6599999999");
    strcpy(id_cpf[aux].data_cadastro, "16/05/2022");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Cristiano Araujo");
    strcpy(id_cpf[aux].cpf, "00688888888");
    strcpy(id_cpf[aux].endereco, "ufmt");
    strcpy(id_cpf[aux].telefone, "6599999999");
    strcpy(id_cpf[aux].data_cadastro, "16/05/2022");

    aux++;

    //produtos
    aux = 1;
    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "pao frances");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

}
