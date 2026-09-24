#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

typedef struct{
    char prontuario[50];
    char nome[50];
    char curso[50];
    data nascimento;
}alunos;

typedef struct{
    char fabricante[50];
    char modelo[50];
    char cor[50];
    data fabricacao;
}produto;

int main()
{
    alunos a;

    a.prontuario="SL3066835"
    a.nome="LUcas"
    a.curso="BCC"
    a.data.dia=1
    a.data.mes=1
    a.data.ano=1

    produto b;

    b.fabricante="Nike"
    b.modelo="Novo"
    b.cor="Rosa"
    b.fabricacao.dia=1
    b.fabricacao.mes=1
    b.fabricacao.ano=1

    return 0;
}
