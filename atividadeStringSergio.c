/*

Implementar uma função que, dadas duas
strings s1 e s2, determinar o número de
caracteres comuns entre elas (com o cuidado de
que o mesmo caracter não seja contabilizado
mais de uma vez).
	
*/

#include <stdio.h>
#include <string.h>

int strCompare (char s1[], char s2[]);

void main ()
{
	char s1[10];
	char s2[10];
		
	fflush (stdin);
	printf ("Entre com uma string: ");
	gets (s1);
	
	fflush (stdin);
	printf ("Entre com outra string: ");
	gets (s2);
	
	strCompare (s1, s2);
	
	printf("\n");	
	
	//verificação usando a strcmp 
	if(strcmp(s1, s2) == 0)
	{
		printf("Strings iguais");
	}
	else
	{
		printf("Strings diferentes");
	}
	
	printf("\n");
	
	printf ("\n %d caracteres comuns.\n", strCompare (s1, s2));
	
}

int strCompare (char s1[], char s2[])
{	
    
	//dec variáveis
	int i, j, cont = 0, cont2 = 0;
	
	for (i=0; s1[i]!='\0'; i++)
	{
		for (j=0; s2[j]!='\0'; j++)
		{
			if(s1[i] == s2[j])
			{
				cont++;
			}
			else{
				cont2++;
			}
		}	
	}
	
	if(cont > 0)
    {
        return cont; //tentaiva falha de parar com a repetição
    }
    else
    {
        return cont2;
    }
	
}
