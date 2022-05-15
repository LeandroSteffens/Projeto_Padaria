#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
/*Das vendas efetuadas pela padaria aos clientes s˜ao registrados o cliente, a data da venda, o produto
vendido, a quantidade vendida e o meio de pagamento. Novamente, o valor de cada venda pode ser calculado
a partir o valor de venda do produto (vide se¸c˜ao 2.2) e a quantidade vendida. Os meios de pagamento aceito
s˜ao: dinheiro, cheque, cart˜ao de d´ebito, cart˜ao de cr´edito, ticket alimenta¸c˜ao e fiado. Como no caso da
compra, para cada produto vendido ´e criada uma entrada nos registros, mesmo que se repita o cliente, a
data e o modo de pagamento.*/

struct vendas_avista {

    int id_vendas, id_produto_vendido, vazio, qnt_vendida;
    float valor_venda;
    char data_venda [10], forma_pagamento[30];
    
}id_vendas_avista[200];

int add_vendas_avista(int id){
    //recebendo dados do vendas_avista
    int opcao;
    id_vendas_avista[id].id_vendas = id;
    id_vendas_avista[id].vazio = 1;
    printf("\nDigite a forma de pagamento");
    printf("\n(1) - Dinheiro");
    printf("\n(2) - Cheque");
    printf("\n(3) - Cartao de debito");
    printf("\n(4) - Cartao de credito");
    printf("\n(5) - Ticket alimentacao");
    scanf("%i", &opcao); 

        switch (opcao)
        {
        case 1: id_vendas_avista[id].forma_pagamento = 'Dinheiro';
            break;
        case 2: id_vendas_avista[id].forma_pagamento = 'Cheque';
            break;
        case 3: id_vendas_avista[id].forma_pagamento = 'Cartao de debito';
            break;
        case 4: id_vendas_avista[id].forma_pagamento = 'Cartao de credito';
            break;
        case 5: id_vendas_avista[id].forma_pagamento = 'Ticket alimentacao';
            break;
        default: 
            printf("\nOpcao invalida\n");
            add_vendas_avista(id);
            break;
        }
    //mostrando produtos
    for(int i = 0; i <= 100; i++){
        if(id_produto[i].vazio == 1 && id_produto[i].qnt_estoque >= 1){
            printf("%i - %s\n", id_produto[i].id_produto, id_produto[i].descricao);
        }
    do{
        printf("\nDigite o codigo do produto: ");
            scanf("%i", &id_vendas_avista[i].id_produto_vendido);
        printf("\nDigite quantidade do produto: ");
            scanf("%i", &id_vendas_avista[id].qnt_vendida);
    } while (id_produto[id_vendas_avista->id_produto_vendido].qnt_estoque < id_vendas_avista[i].qnt_vendida);

    printf("\nDigite a data da venda: ");
        scanf("%s", id_vendas_avista[id].data_venda);
    }
}