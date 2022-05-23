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
#include "areceber_fornecedores.h"

int verifica_id_cliente_cpf(int j);
int verifica_id_cliente_cnpj(int j);
int verifica_id_fornecedor(int j);
void relatorios_areceber();
void relatorios_apagar();
void relatorios_vendasprod();
void relatorios_estoque();
void relatorios_vendaspgto();


int main(){


    int opcao, i, id, id_venda_atual = 1, id_areceber_fornecedor = 1;


    opcao = 0;

    printf("\nPadaria Sr. Manoel");
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

        case 5:
            areceber_fornecedor(id_areceber_fornecedor);
            id_areceber_fornecedor++;
            main();
            break;

        case 6:
            printf("\nDigite o relatorio desejado");
            printf("\n(1) - Total a pagar por fornecedor");
            printf("\n(2) - Total a receber por cliente");
            printf("\n(3) - Vendas e lucro por produto");
            printf("\n(4) - Vendas e lucro por forma de pagamento");
            printf("\n(5) - Estado do estoque\n");
            scanf("%i", &opcao);

            switch (opcao){
                case 1:
                    relatorios_apagar();
                    main();
                    break;
                case 2:
                    relatorios_areceber();
                    main();
                    break;
                case 3:
                    relatorios_vendasprod();
                    main();
                    break;
                case 4:
                    relatorios_vendaspgto();
                    main();
                    break;
                case 5:
                    relatorios_estoque();
                    main();
                    break;           
                default:
                    main();
                    break;
            }
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

void relatorios_areceber(){
    FILE *file = fopen("areceber.csv", "w");

    fputs("Nome;CPF;Endereco;Telefone;Data de cadastro;Saldo a pagar", file);

    for(int i = 0; i <= 100; i++){
        if(id_cpf[i].vazio == 1){
            fprintf(file, "\n""%s"";""%s"";""%s"";""%s"";""%s"";""%.2f""", id_cpf[i].nome, id_cpf[i].cpf, id_cpf[i].endereco, id_cpf[i].telefone, id_cpf[i].data_cadastro, id_cpf[i].saldo);
        }
    }
fclose(file);
}

void relatorios_apagar(){
    FILE *file = fopen("apagar.csv", "w");

    fputs("Nome;CNPJ;Pessoa de contato;Telefone;Valor total a pagar", file);

    for(int i = 0; i <= 100; i++){
        if(id_fornecedor[i].vazio == 1){
            fprintf(file, "\n""%s"";""%s"";""%s"";""%s"";""%.2f""", id_fornecedor[i].nome, id_fornecedor[i].cnpj, id_fornecedor[i].pessoa_contato, id_fornecedor[i].telefone, id_fornecedor[i].saldo);
        }
    }
fclose(file);
}

void relatorios_vendasprod(){
    FILE *file = fopen("vendasprod.csv", "w");

    fputs("Codigo do produto;Descricao do produto;Receita bruta da venda do produto;Lucro da venda do produto", file);

    for(int i = 0; i<=100; i++){
        if(id_produto[i].vazio == 1){
             fprintf(file, "\n""%i"";""%s"";""%.2f"";""%.2f""", id_produto[i].id, id_produto[i].descricao, (id_produto[i].qnt_vendida * id_produto[i].valor_venda), (id_produto[i].qnt_vendida * (id_produto[i].lucro/100)));
        }
    }
fclose(file);
}

void relatorios_vendaspgto(){
    FILE *file = fopen("vendaspgto.csv", "w");

    fputs("Modo de pagamento;Receita bruta do modo de pagamento;Lucro desse modo de pagamento", file);

    float bruto = 0, lucro = 0;

    //calculando receita e lucro por meio de pagamento fiado
    for(int i=0; i<=100; i++)
        if(id_vendas_fiado[i].vazio == 1){
            lucro += id_vendas_fiado[i].lucro_venda;
            bruto += id_vendas_fiado[i].valor_venda;
        }
    fprintf(file, "\n""Fiado"";""%.2f"";""%.2f""", bruto, lucro);
           
    //calculando receita e lucro por meios de pagamentos a vista  
        //dinheiro
        bruto = 0; lucro = 0; 
        for(int i=0; i<=100; i++)
            if(id_vendas_avista[i].vazio == 1 && id_vendas_avista[i].id_forma_pagamento == 1){
                lucro += id_vendas_avista[i].lucro_venda;
                bruto += id_vendas_avista[i].valor_venda;
        }
        fprintf(file, "\n""Dinheiro"";""%.2f"";""%.2f""", bruto, lucro);

        //cheque
        bruto = 0; lucro = 0; 
        for(int i=0; i<=100; i++)
            if(id_vendas_avista[i].vazio == 1 && id_vendas_avista[i].id_forma_pagamento == 2){
                lucro += id_vendas_avista[i].lucro_venda;
                bruto += id_vendas_avista[i].valor_venda;
        }
        fprintf(file, "\n""Cheque"";""%.2f"";""%.2f""", bruto, lucro);
        
        //cartao de debito
        bruto = 0; lucro = 0; 
        for(int i=0; i<=100; i++)
            if(id_vendas_avista[i].vazio == 1 && id_vendas_avista[i].id_forma_pagamento == 3){
                lucro += id_vendas_avista[i].lucro_venda;
                bruto += id_vendas_avista[i].valor_venda;
        }
        fprintf(file, "\n""Cartao de debito"";""%.2f"";""%.2f""", bruto, lucro);

        //cartao de credito
        bruto = 0; lucro = 0; 
        for(int i=0; i<=100; i++)
            if(id_vendas_avista[i].vazio == 1 && id_vendas_avista[i].id_forma_pagamento == 4){
                lucro += id_vendas_avista[i].lucro_venda;
                bruto += id_vendas_avista[i].valor_venda;
        }
        fprintf(file, "\n""Cartao de credito"";""%.2f"";""%.2f""", bruto, lucro);

        //ticket alimentacao
        bruto = 0; lucro = 0; 
        for(int i=0; i<=100; i++)
            if(id_vendas_avista[i].vazio == 1 && id_vendas_avista[i].id_forma_pagamento == 5){
                lucro += id_vendas_avista[i].lucro_venda;
                bruto += id_vendas_avista[i].valor_venda;
        }
        fprintf(file, "\n""Ticket alimentacao"";""%.2f"";""%.2f""", bruto, lucro);
    
fclose(file);
}

void relatorios_estoque(){
    FILE *file = fopen("estoque.csv", "w");

    fputs("Codigo do produto;Descricao do produto;Quantidade em estoque;Observacoes", file);

    for(int i = 0; i<=100; i++){
        if(id_produto[i].vazio == 1){
            if(id_produto[i].estoque_min < id_produto[i].qnt_estoque)
               fprintf(file, "\n""%i"";""%s"";""%i"";""", id_produto[i].id, id_produto[i].descricao, id_produto[i].qnt_estoque);
            else
                fprintf(file, "\n""%i"";""%s"";""%i"";""COMPRAR MAIS""", id_produto[i].id, id_produto[i].descricao, id_produto[i].qnt_estoque);
        }
    }
fclose(file);

}


           

