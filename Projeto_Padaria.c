#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "clientes.h"

int main(){

    int opcao, id_cliente;
    char nome [50], endereco [100], telefone [11], data_cadastro [9], cpf [11], cnpj [14];

    printf("Padaria Sr. Manoel");
    printf("\nSelecione uma opcao abaixo:");
    printf("\n(1) - Cadastro de clientes");
    printf("\n(2) - Cadastro de produtos");
    printf("\n(3) - Cadastro de fornecedor");
    printf("\n(4) - Inserir contas a pagar");
    printf("\n(5) - Venda a vista");
    printf("\n(6) - Venda fiado");
    printf("\n(7) - Relatorios");
    printf("\n(8) - Sair\n");

    scanf("%i", &opcao);

    switch (opcao){

        case 1:
            printf("\n(1) - Pessoa fisica");
            printf("\n(2) - Pessoa juridica\n");
            scanf("%i", &opcao);

            switch (opcao){

                case 1:

                    printf("Digite o nome do cliente: ");
                        scanf("%s", nome); 
                    printf("\nDigite o endereco do cliente: ");
                        scanf("%s", endereco);
                    printf("\nDigite o telefone do cliente: ");
                        scanf("%s", telefone);
                    printf("\nDigite a data do cadastro do cliente: ");
                        scanf("%s", data_cadastro);
                    printf("\nDigite o cpf do cliente: ");
                        scanf("%s", cpf); 
                    printf("\nDigite um id para o cliente: ");
                        scanf("%i", &id_cliente);

                    criar_cliente(id_cliente, nome);

                break;
            }

        break;
    }
//free variaveis

}






































