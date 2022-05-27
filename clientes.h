struct cliente_cpf {

    int id, vazio;
    float saldo;
    char nome [52], cpf [15], endereco [102], telefone[17], data_cadastro [12];

} id_cpf[100];


int add_cliente_cpf(){
    int i = 1;
    
    //verificando id
    while (id_cpf[i].vazio == 1)
        i++;
    

    //recebendo dados do cliente
    id_cpf[i].id = i;
    id_cpf[i].vazio = 1;
    printf("\nDigite o nome do cliente: ");
        scanf(" %52[^\n]", id_cpf[i].nome);
    printf("\nDigite o cpf do cliente: ");
        scanf(" %14[^\n]", id_cpf[i].cpf);
    printf("\nDigite o endereco do cliente: ");
        scanf(" %72[^\n]", id_cpf[i].endereco);
    printf("\nDigite o telefone do cliente: ");
        scanf(" %13[^\n]", id_cpf[i].telefone);
    printf("\nDigite a data do cadastro do cliente: ");
        scanf(" %12[^\n]", id_cpf[i].data_cadastro);
}

