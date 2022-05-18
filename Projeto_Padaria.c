#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "clientes.h"
#include "clientes_cnpj.h"
#include "fornecedor.h"
#include "produto.h"
#include "vendas_avista.h"
#include "vendas_fiado.h"
#include "cadastro_auto.h"

int verifica_id_cliente_cpf(int j);
int verifica_id_cliente_cnpj(int j);
int verifica_id_fornecedor(int j);
void relatorios_apagar();


int main(){


    int opcao, i, id, aux_id_cpf[100], aux_id_cnpj[100], id_venda_atual = 0;

    //zerando vetor
    for (int i=0; i <= 100; i++){
        aux_id_cpf[i] = 0;
        aux_id_cnpj[i] = 0;
    }
    opcao = 0;

    printf("Padaria Sr. Manoel");
    printf("\nSelecione uma opcao abaixo:");
    printf("\n(1) - Cadastro de clientes");
    printf("\n(2) - Cadastro de produtos");
    printf("\n(3) - Cadastro de fornecedor");
    printf("\n(4) - Registro de vendas");
    printf("\n(5) - Registro de compras");
    printf("\n(6) - Relatorios");
    printf("\n(8) - Cadastros automaticos");
    printf("\n(9) - Sair\n");

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
                        scanf("%i", &id);
                        if (verifica_id_cliente_cpf(id) == 1){
                            add_cliente_cpf(id);
                            main();
                        }
                        else{
                            printf("\n\nID NAO DISPONIVEL\n\n");
                        }
                    }while (verifica_id_cliente_cpf(id) == 0);
                break;

                case 2:
            do{
                    printf("\nDigite um id para cadastrar o cliente: ");
                    scanf("%i", &id);
                    if (verifica_id_cliente_cnpj(id) == 1){
                        add_cliente_cnpj(id);
                        main();
                    }
                    else{
                        printf("\nID NAO DISPONIVEL\n");
                    }
                }while (verifica_id_cliente_cnpj(id) == 0);

                default:
                    printf("\nOpcao invalida\n");
                    main();
                    break;
        break;

            }
        break;

        case 2:
                do{
                    printf("\nDigite um id para cadastrar o produto: ");
                    scanf("%i", &id);
                    if (verifica_id_produto(id) == 1){
                        add_produto(id);
                        main();
                    }
                    else{
                        printf("\nID NAO DISPONIVEL\n");
                    }
                }while (verifica_id_produto(id) == 0);
            break;

        case 3:
            do{
                printf("\nDigite um id para cadastrar o fornecedor: ");
                scanf("%i", &id);
                if (verifica_id_fornecedor(id) == 1){
                    add_fornecedor(id);
                    printf("\n\nFornecedor CADASTRADO COM SUCESSO\n\n");
                    main();
                }
                else{
                    printf("\nID NAO DISPONIVEL\n");
                }
            }while (verifica_id_fornecedor(id) == 0);
        break;

        case 4:
            printf("\nForma de pagamento fiado?");
            printf("\n(1) - Sim");
            printf("\n(2) - Nao\n");
            scanf("%i", &opcao);
                switch (opcao){

                    case 1:
                        add_vendas_fiado(id_venda_atual);
                        id_venda_atual++;
                        main();
                        break;
                    case 2:
                        add_vendas_avista(id_venda_atual);
                        id_venda_atual++;
                        main();
                        break;
                    default:
                        printf("Opcao invalida");
                        main();
                        break;
                }
        break;

        case 6: 
         relatorios_apagar();
            main();
        break;

        case 8:
            cadastros();
            main();
        break;

        case 9:
            exit(1);
        break;

        default:
            main();
        break;
    }
//free variaveis


}

int verifica_id_cliente_cpf(int j){

    if(id_cpf[j].vazio == 0)
        return 1;
    return 0;
}

int verifica_id_cliente_cnpj(int j){

    if(id_cnpj[j].vazio == 0)
        return 1;
    return 0;
}

int verifica_id_fornecedor(int j){

    if(id_fornecedor[j].vazio == 0)
        return 1;
    return 0;
}

int verifica_id_produto(int j){

    if(id_produto[j].vazio == 0)
        return 1;
    return 0;
}

void relatorios_apagar(){
    FILE *file = fopen("apagar.csv", "w");

    fputs("Nome;CPF;Endereco;Telefone;Data de cadastro", file);

    for(int i = 0; i <= 100; i++){
        if(id_cpf[i].vazio == 1){
            fprintf(file, "\n""%s"";""%s"";""%s"";""%s"";""%s""", id_cpf[i].nome, id_cpf[i].cpf, id_cpf[i].endereco, id_cpf[i].telefone, id_cpf[i].data_cadastro);
        }
    }
fclose(file);
}