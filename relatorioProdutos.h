#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

//Fun��o relat�rio de produtos
void relatorioProdutos(){

  	FILE *fptr;
	short int ch;
	// L� aquvo
	fptr = fopen("estoque.txt","r");

	while((ch=fgetc(fptr)) != EOF)
	printf("%c", ch);
	fclose(fptr);
	getchar();
	
	system("pause");
}
