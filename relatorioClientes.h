#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

	// Fun��o relat�rio
void menuRelatorios();
void relatorioClientes(){

  	FILE *fptr;
	short int ch;
	// L� o arquivo 
	fptr = fopen("cliente.txt","r");

	while((ch=fgetc(fptr)) != EOF)
	printf("%c", ch);
	fclose(fptr);
	getchar();
	
	system("pause");
	for (;;) menuRelatorios();
}
