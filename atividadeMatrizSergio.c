/*
	Desenvolver uma fun��o que, dada uma matriz
	de inteiros M10x30, proceda com uma troca de
	colunas de forma que a primeira seja trocada
	com a �ltima, a segunda com a pen�ltima, at�
	que a 15a seja permutada com a 16a.
	Nota: as altera��es devem ser feitas sobre a matriz
	original; ou seja, n�o deve ser criada uma nova matriz.

*/

//import bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//def constantes
#define L 10
#define C 30

//prot�tipo fun��es

void permutMatriz (int matriz[L][C]);

void preencherAleatorio (int matriz[L][C]);
void exibir (int matriz[L][C]);

void main ()
{
	//dec vari�veis
	int matriz[L][C];
	
	preencherAleatorio (matriz);
	
	exibir (matriz);
	
	printf("\n");
	
	permutMatriz (matriz);
	
	exibir (matriz);	
}

void permutMatriz (int matriz[L][C])
{
	//dec vari�veis
	int i, j, aux, auxC;
	
	//percorre as linhas
	for(i=0; i<L; i++)
	{
		auxC=C-1; //iniciando o aux para movimentar as colunas de forma que as mesmas n�o intercedam na coluna a seguir ou na anterior
		//percorre as colunas
	    for(j=0; j<auxC; j++)
        {
            aux= matriz[i][j]; //aux para n�o perder numeros
            matriz[i][j]= matriz[i][auxC]; // jogando os numeros de uma coluna para outra no final da matriz com o 'decremento'
            matriz[i][auxC]= aux;
            
            auxC--; //decrementando para 'inverter' a coluna
        }
	}
}


void preencherAleatorio (int matriz[L][C])
{
	//dec vari�veis
	int i, j;	
	srand (time(NULL));
	
	for (i=0; i<L; i++)
	{
		for (j=0; j<C; j++)
		{
			matriz[i][j]= 1+rand()%10;
		}
	}
}

void exibir (int matriz[L][C])
{

	int i, j;
	
	for (i=0; i<L; i++)
	{
		for (j=0; j<C; j++)
		{
			printf ("%3d ", matriz[i][j]);
		}
		printf ("\n");
	}	
	printf ("\n\n");
}
