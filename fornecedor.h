struct fornecedor {

    int id, vazio;
    float saldo;
    char nome [52], endereco [102], telefone [17], cnpj [22], ins_est[14], pessoa_contato[52];

} id_fornecedor[100];

int add_fornecedor(){
    int id;

    //verificando id
    while (id_fornecedor[id].vazio == 1)
        id++;

    //recebendo dados do fornecedor
    id_fornecedor[id].id = id;
    id_fornecedor[id].vazio = 1;
    printf("\nDigite o nome do fornecedor: ");
        scanf(" %52[^\n]", id_fornecedor[id].nome);
    printf("\nDigite o endereco do fornecedor: ");
        scanf(" %102[^\n]", id_fornecedor[id].endereco);
    printf("\nDigite o telefone do fornecedor: ");
        scanf(" %13[^\n]", id_fornecedor[id].telefone);
    printf("\nDigite o cnpj do fornecedor: ");
        scanf(" %13[^\n]", id_fornecedor[id].cnpj);
    printf("\nDigite a inscricao estadual: ");
        scanf(" %13[^\n]", id_fornecedor[id].ins_est);
    printf("\nDigite a pessoa de contato: ");
        scanf(" %52[^\n]", id_fornecedor[id].pessoa_contato);
}
