struct cliente_cpf {

    int id, vazio;
    float saldo;
    char nome [50], cpf [12], endereco [100], telefone[11], data_cadastro [10];

} id_cpf[100];


int add_cliente_cpf(int i){
    //recebendo dados do cliente
    id_cpf[i].id = i;
    id_cpf[i].vazio = 1;
    printf("\nDigite o nome do cliente: ");
        scanf(" %50[^\n]", &id_cpf[i].nome);
    printf("\nDigite o cpf do cliente: ");
        scanf(" %12[^\n]", id_cpf[i].cpf);
    printf("\nDigite o endereco do cliente: ");
        scanf(" %70[^\n]", &id_cpf[i].endereco);
    printf("\nDigite o telefone do cliente: ");
        scanf(" %11[^\n]", &id_cpf[i].telefone);
    printf("\nDigite a data do cadastro do cliente: ");
        scanf(" %10[^\n]", &id_cpf[i].data_cadastro);
}

