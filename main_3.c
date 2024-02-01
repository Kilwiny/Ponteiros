/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int inverte(char *str) {
    
    int tamanho =0;
    
    while(*str != '\0'){
        tamanho++;
        str++;
    }
    
    return tamanho;
}

int main() {
    //questao 4
  char numero[10];

  printf("Digite um número: ");
  scanf("%s", &numero);

  int tam = inverte(numero);
  
  printf("Original: %s\n",numero);
  
  printf("Invertido: ");
  for(int i=tam-1; i>=0; i--){
      printf("%c",numero[i]);
  }
  

  return 0;
}

