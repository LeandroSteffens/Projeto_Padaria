

void cadastros(){
    //clientes
    int aux = 1;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Cesar Filho");
    strcpy(id_cpf[aux].cpf, "97179932035");
    strcpy(id_cpf[aux].endereco, "Vila rosa");
    strcpy(id_cpf[aux].telefone, "6596826-5535");
    strcpy(id_cpf[aux].data_cadastro, "16/05/2022");
    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Leandro Steffens");
    strcpy(id_cpf[aux].cpf, "00701420090");
    strcpy(id_cpf[aux].endereco, "Boa esperanca");
    strcpy(id_cpf[aux].telefone, "66976756636");
    strcpy(id_cpf[aux].data_cadastro, "04/09/22");
    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Gabriela Stefany Ribeiro");
    strcpy(id_cpf[aux].cpf, "00875444075");
    strcpy(id_cpf[aux].endereco, "Jardim Eldorado");
    strcpy(id_cpf[aux].telefone, "62985638424");
    strcpy(id_cpf[aux].data_cadastro, "03/02/22");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Daiane Alicia da Conceicao");
    strcpy(id_cpf[aux].cpf, "67723438753");
    strcpy(id_cpf[aux].endereco, "Parque Cuiaba");
    strcpy(id_cpf[aux].telefone, "6599999999");
    strcpy(id_cpf[aux].data_cadastro, "02/11/22");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Augusto Bento Brito");
    strcpy(id_cpf[aux].cpf, "52210654106");
    strcpy(id_cpf[aux].endereco, "Jardim Vitoria");
    strcpy(id_cpf[aux].telefone, "65981023058");
    strcpy(id_cpf[aux].data_cadastro, "06/02/22");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Sara Tatiane de Paula");
    strcpy(id_cpf[aux].cpf, "07189604162");
    strcpy(id_cpf[aux].endereco, "Cidade Verde");
    strcpy(id_cpf[aux].telefone, "65996685751");
    strcpy(id_cpf[aux].data_cadastro, "09/05/21");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Sophia Nair Josefa Almada");
    strcpy(id_cpf[aux].cpf, "19943608102");
    strcpy(id_cpf[aux].endereco, "Tres Barras");
    strcpy(id_cpf[aux].telefone, "65985184746");
    strcpy(id_cpf[aux].data_cadastro, "08/03/21");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Marcio Calebe Rodrigues");
    strcpy(id_cpf[aux].cpf, "65778882130");
    strcpy(id_cpf[aux].endereco, "Pedra 90");
    strcpy(id_cpf[aux].telefone, "65981252437");
    strcpy(id_cpf[aux].data_cadastro, "07/03/20");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Eloa Sueli da Cruz");
    strcpy(id_cpf[aux].cpf, "79173442151");
    strcpy(id_cpf[aux].endereco, "Jardim Alvorada");
    strcpy(id_cpf[aux].telefone, "65993158340");
    strcpy(id_cpf[aux].data_cadastro, "06/11/21");

    aux++;

    id_cpf[aux].id = aux;
    id_cpf[aux].vazio = 1;
    strcpy(id_cpf[aux].nome, "Tania Mirella Luciana Drumond");
    strcpy(id_cpf[aux].cpf, "41042432139");
    strcpy(id_cpf[aux].endereco, "Jardim Imperial II");
    strcpy(id_cpf[aux].telefone, "65994624174");
    strcpy(id_cpf[aux].data_cadastro, "05/01/21");

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
    id_produto[aux].valor_custo = 2;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Pao arabe");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 3;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Pao caseiro");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Sonho");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 2;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Empada");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Brigadeiro");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 3;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Beijinho");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 3;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Risolis");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 4;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Misto quente");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Cafe");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 1;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Achocolatado");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 3;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Coca cola");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 7;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Guarana");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 7;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Agua mineral");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Agua com gas");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 6;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Trident");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 2;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Pirulito");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 0.5;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Queijo mussarela");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 10;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    id_produto[aux].id = aux;
    id_produto[aux].vazio = 1;
    strcpy(id_produto[aux].descricao, "Presunto");
    id_produto[aux].estoque_min = 2;
    id_produto[aux].qnt_estoque = 5;
    id_produto[aux].valor_custo = 9;
    id_produto[aux].lucro = 50;
    id_produto[aux].valor_venda = id_produto[aux].valor_custo + id_produto[aux].valor_custo * (id_produto[aux].lucro/100);

    aux++;

    //fornecedores
    aux = 1;

    id_fornecedor[aux].id = aux;
    id_fornecedor[aux].vazio = 1;
    strcpy(id_fornecedor[aux].nome, "Fabiana e Alice Informatica ME");
    strcpy(id_fornecedor[aux].cnpj, "81986099000144");
    strcpy(id_fornecedor[aux].endereco, "Vila Olinda");
    strcpy(id_fornecedor[aux].telefone, "6638174709");
    strcpy(id_fornecedor[aux].ins_est, "48759409107");
    strcpy(id_fornecedor[aux].pessoa_contato, "Cesar Filho");

    aux++;

    id_fornecedor[aux].id = aux;
    id_fornecedor[aux].vazio = 1;
    strcpy(id_fornecedor[aux].nome, "Marcelo e Marcos Vinicius Doces & Salgados ME");
    strcpy(id_fornecedor[aux].cnpj, "38434175000180");
    strcpy(id_fornecedor[aux].endereco, "Parque Residencial Universitario");
    strcpy(id_fornecedor[aux].telefone, "6636737401");
    strcpy(id_fornecedor[aux].ins_est, "77677213393");
    strcpy(id_fornecedor[aux].pessoa_contato, "Leandro Steffens");

    aux++;

    id_fornecedor[aux].id = aux;
    id_fornecedor[aux].vazio = 1;
    strcpy(id_fornecedor[aux].nome, "Sonia e Thomas Eletronica ME");
    strcpy(id_fornecedor[aux].cnpj, "58934428000191");
    strcpy(id_fornecedor[aux].endereco, "Altos do Coxipo");
    strcpy(id_fornecedor[aux].telefone, "6536174018");
    strcpy(id_fornecedor[aux].ins_est, "83480897010");
    strcpy(id_fornecedor[aux].pessoa_contato, "Gabriela Stefany Ribeiro");

    aux++;

    id_fornecedor[aux].id = aux;
    id_fornecedor[aux].vazio = 1;
    strcpy(id_fornecedor[aux].nome, "Valentina e Livia Informatica ME");
    strcpy(id_fornecedor[aux].cnpj, "53778777000148");
    strcpy(id_fornecedor[aux].endereco, "Loteamento Menino Jesus I");
    strcpy(id_fornecedor[aux].telefone, "6636174339");
    strcpy(id_fornecedor[aux].ins_est, "32956852600");
    strcpy(id_fornecedor[aux].pessoa_contato, "Daiane Alicia da Conceicao");

    aux++;

    id_fornecedor[aux].id = aux;
    id_fornecedor[aux].vazio = 1;
    strcpy(id_fornecedor[aux].nome, "Pedro Henrique e Miguel Restaurante Ltda");
    strcpy(id_fornecedor[aux].cnpj, "03586530000151");
    strcpy(id_fornecedor[aux].endereco, "Jardim das Palmeiras");
    strcpy(id_fornecedor[aux].telefone, "6636911475");
    strcpy(id_fornecedor[aux].ins_est, "99270637612");
    strcpy(id_fornecedor[aux].pessoa_contato, "Augusto Bento Brito");

    aux++;

}
