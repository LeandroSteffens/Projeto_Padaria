struct cliente_cnpj {

    int id, vazio;
    float saldo;
    char nome [50], endereco [100], telefone [15], data_cadastro [11], cnpj [16], ins_est[12];

} id_cnpj[100];


int add_cliente_cnpj(int id){
    //recebendo dados do cliente
    id_cnpj[id].id = id;
    id_cnpj[id].vazio = 1;
    printf("\nDigite o nome do cliente: ");
        scanf(" %50[^\n]", id_cnpj[id].nome);
    printf("\nDigite o endereco do cliente: ");
        scanf(" %100[^\n]", id_cnpj[id].endereco);
    printf("\nDigite o telefone do cliente: ");
        scanf(" %15[^\n]", id_cnpj[id].telefone);
    printf("\nDigite a data do cadastro do cliente: ");
        scanf(" %11[^\n]", id_cnpj[id].data_cadastro);
    printf("\nDigite o cnpj do cliente: ");
        scanf(" %16[^\n]", id_cnpj[id].cnpj);
    printf("\nDigite a inscricao estadual: ");
        scanf(" %12[^\n]", id_cnpj[id].ins_est);
}