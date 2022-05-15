#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "clientes.h"
#include "clientes_cnpj.h"

int verifica_id_cliente_cpf(int i, int *aux);

int main(){

    int opcao, i, aux_id_cpf[100], aux_id_cnpj[100];

    //zerando vetor
    for (int i=0; i <= 100; i++){
        aux_id_cpf[i] = 0;
        aux_id_cnpj[i] = 0;
    }

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
                    //verificar id do cliente
                    do{
                        printf("Digite um id para cadastrar o cliente: ");
                        scanf("%i", &i);
                        if (verifica_id_cliente_cpf(i, aux_id_cpf) == 1){
                            add_cliente_cpf(i);
                            printf("\n\nCLIENTE CADASTRADO COM SUCESSO\n\n");
                            aux_id_cpf[i] = i;
                            main();     
                        }                       
                        else{
                            printf("\nID NAO DISPONIVEL");
                        }
                    }while (verifica_id_cliente_cpf(i, aux_id_cpf) != 1);                        
                break;

                case 2:
                    do{
                        printf("Digite um id para cadastrar o cliente: ");
                        scanf("%i", &i);
                        if (verifica_id_cliente_cnpj(i, aux_id_cnpj) == 1){
                            add_cliente_cnpj(i);
                            printf("\n\nCLIENTE CADASTRADO COM SUCESSO\n\n");
                            aux_id_cnpj[i] = i;
                            main();     
                        }                       
                        else{
                            printf("\nID NAO DISPONIVEL");
                        }
                    }while (verifica_id_cliente_cnpj(i, aux_id_cnpj) != 1);
                break;
            }
        break;
    }
//free variaveis

    
}

int verifica_id_cliente_cpf(int i, int *aux){
    int j;
    
    for (int i=0; i <= 100; i++)
        if(aux[i] == i)
            return 1;
        else
            return 0;
}