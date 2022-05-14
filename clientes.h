#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct cliente_cpf {

    int id_cliente;
    char nome [50], endereco [100], telefone [11], data_cadastro [9], cpf [11];
    
} id_cpf[100];

    
int add_cliente_cpf(int id){
    //recebendo dados do cliente
    id_cpf[id].id_cliente = id;
    printf("\nDigite o nome do cliente: ");
        scanf("%s", id_cpf->nome); 
    printf("\nDigite o endereco do cliente: ");
        scanf("%s", id_cpf->endereco);
    printf("\nDigite o telefone do cliente: ");
        scanf("%s", id_cpf->telefone);
    printf("\nDigite a data do cadastro do cliente: ");
        scanf("%s", id_cpf->data_cadastro);
    printf("\nDigite o cpf do cliente: ");
        scanf("%s", id_cpf->cpf); 
}



