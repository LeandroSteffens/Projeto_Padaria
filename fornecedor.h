struct fornecedor {

    int id, vazio;
    float saldo;
    char nome [50], endereco [100], telefone [11], cnpj [11], ins_est[11], pessoa_contato[50];

} id_fornecedor[100];

int add_fornecedor(int id){
    //recebendo dados do fornecedor
    id_fornecedor[id].id = id;
    id_fornecedor[id].vazio = 1;
    printf("\nDigite o nome do fornecedor: ");
        scanf(" %50[^\n]", id_fornecedor[id].nome);
    printf("\nDigite o endereco do fornecedor: ");
        scanf(" %100[^\n]", id_fornecedor[id].endereco);
    printf("\nDigite o telefone do fornecedor: ");
        scanf(" %11[^\n]", id_fornecedor[id].telefone);
    printf("\nDigite o cnpj do fornecedor: ");
        scanf(" %11[^\n]", id_fornecedor[id].cnpj);
    printf("\nDigite a inscricao estadual: ");
        scanf(" %11[^\n]", id_fornecedor[id].ins_est);
    printf("\nDigite a pessoa de contato: ");
        scanf(" %50[^\n]", id_fornecedor[id].pessoa_contato);
}
