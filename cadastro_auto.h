

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
    strcpy(id_cpf[aux].cpf, "00688888899");
    strcpy(id_cpf[aux].endereco, "ufmt2");
    strcpy(id_cpf[aux].telefone, "6599999889");
    strcpy(id_cpf[aux].data_cadastro, "16/04/2022");
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
    strcpy(id_produto[aux].descricao, "Pao frances");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Pao de forma");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Pao arabe");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Pao caseiro");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Sonho");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Empada");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Brigadeiro");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Beijinho");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Risolis");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Misto quente");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Cafe");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Achocolatado");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Coca cola");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Guarana");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Agua mineral");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Agua com gas");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Trident");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Pirulito");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Queijo mussarela");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Presunto");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    //fornecedores
    aux = 1;

    id_fornecedor[aux].id = aux;
    id_fornecedor[aux].vazio = 1;
    strcpy(id_fornecedor[aux].nome, "cesao");
    strcpy(id_fornecedor[aux].cnpj, "00688888888");
    strcpy(id_fornecedor[aux].endereco, "ufmt");
    strcpy(id_fornecedor[aux].telefone, "6599999999");
    strcpy(id_fornecedor[aux].ins_est, "1111111");
    strcpy(id_fornecedor[aux].pessoa_contato, "lex");

    aux++;

    id_fornecedor[aux].id = aux;
    id_fornecedor[aux].vazio = 1;
    strcpy(id_fornecedor[aux].nome, "leozao");
    strcpy(id_fornecedor[aux].cnpj, "00688888888");
    strcpy(id_fornecedor[aux].endereco, "ufmt");
    strcpy(id_fornecedor[aux].telefone, "6599999999");
    strcpy(id_fornecedor[aux].ins_est, "1111111");
    strcpy(id_fornecedor[aux].pessoa_contato, "lex");

    aux++;

    id_fornecedor[aux].id = aux;
    id_fornecedor[aux].vazio = 1;
    strcpy(id_fornecedor[aux].nome, "cr7zao");
    strcpy(id_fornecedor[aux].cnpj, "00688888888");
    strcpy(id_fornecedor[aux].endereco, "ufmt");
    strcpy(id_fornecedor[aux].telefone, "6599999999");
    strcpy(id_fornecedor[aux].ins_est, "1111111");
    strcpy(id_fornecedor[aux].pessoa_contato, "lex");

    aux++;

    id_fornecedor[aux].id = aux;
    id_fornecedor[aux].vazio = 1;
    strcpy(id_fornecedor[aux].nome, "messao");
    strcpy(id_fornecedor[aux].cnpj, "00688888888");
    strcpy(id_fornecedor[aux].endereco, "ufmt");
    strcpy(id_fornecedor[aux].telefone, "6599999999");
    strcpy(id_fornecedor[aux].ins_est, "1111111");
    strcpy(id_fornecedor[aux].pessoa_contato, "lex");

    aux++;

    id_fornecedor[aux].id = aux;
    id_fornecedor[aux].vazio = 1;
    strcpy(id_fornecedor[aux].nome, "rock balboa");
    strcpy(id_fornecedor[aux].cnpj, "00688888888");
    strcpy(id_fornecedor[aux].endereco, "ufmt");
    strcpy(id_fornecedor[aux].telefone, "6599999999");
    strcpy(id_fornecedor[aux].ins_est, "1111111");
    strcpy(id_fornecedor[aux].pessoa_contato, "lex");

    aux++;

}
