#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct {

    int id_cliente, tipo_cadastro;
    char nome [50], endereco [100], telefone [11], data_cadastro [9], cpf [11], cnpj [14];
    
} cliente;

cliente criar_cliente(int id_cliente, char nome[50]){
    cliente id;
    
    strcopy(id.nome, nome);
    return id;
}

