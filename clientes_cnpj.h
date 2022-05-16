#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct cliente_cnpj {

    int id, vazio, saldo;
    char nome [50], endereco [100], telefone [11], data_cadastro [9], cnpj [15], ins_est[11];

} id_cnpj[100];


int add_cliente_cnpj(int id){
    //recebendo dados do cliente
    id_cnpj[id].id = id;
    id_cnpj[id].vazio = 1;
    printf("\nDigite o nome do cliente: ");
        scanf("%s", id_cnpj[id].nome);
    printf("\nDigite o endereco do cliente: ");
        scanf("%s", id_cnpj[id].endereco);
    printf("\nDigite o telefone do cliente: ");
        scanf("%s", id_cnpj[id].telefone);
    printf("\nDigite a data do cadastro do cliente: ");
        scanf("%s", id_cnpj[id].data_cadastro);
    printf("\nDigite o cnpj do cliente: ");
        scanf("%s", id_cnpj[id].cnpj);
    printf("\nDigite a inscricao estadual: ");
        scanf("%s", id_cnpj[id].ins_est);
}
