struct cliente_cpf {

    int id, vazio;
    float saldo;
    char nome [50], endereco [100], telefone [11], data_cadastro [10], cpf [11];

} id_cpf[100];


int add_cliente_cpf(int i){
    //recebendo dados do cliente
    id_cpf[i].id = i;
    id_cpf[i].vazio = 1;
    printf("\nDigite o nome do cliente: ");
        scanf("%s", id_cpf[i].nome);
    printf("\nDigite o endereco do cliente: ");
        scanf("%s", id_cpf[i].endereco);
    printf("\nDigite o telefone do cliente: ");
        scanf("%s", id_cpf[i].telefone);
    printf("\nDigite a data do cadastro do cliente: ");
        scanf("%s", id_cpf[i].data_cadastro);
    printf("\nDigite o cpf do cliente: ");
        scanf("%s", id_cpf[i].cpf);
}

