#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct cliente_cnpj {

    int id_cliente;
    char nome [50], endereco [100], telefone [11], data_cadastro [9], cnpj [15], ins_est[11];
    
} id_cnpj[100];

    
int add_cliente_cnpj(int id){
    //recebendo dados do cliente
    id_cnpj[id].id_cliente = id;
    printf("\nDigite o nome do cliente: ");
        scanf("%s", id_cnpj->nome); 
    printf("\nDigite o endereco do cliente: ");
        scanf("%s", id_cnpj->endereco);
    printf("\nDigite o telefone do cliente: ");
        scanf("%s", id_cnpj->telefone);
    printf("\nDigite a data do cadastro do cliente: ");
        scanf("%s", id_cnpj->data_cadastro);
    printf("\nDigite o cnpj do cliente: ");
        scanf("%s", id_cnpj->cnpj);
    printf("\nDigite a inscricao estadual: ");
        scanf("%s", id_cnpj->ins_est); 
}