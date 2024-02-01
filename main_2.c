/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* questao 5*/
    
    float valor;
    float *p = &valor;
    
    printf("Escreva o valor: ");
    scanf("%f", &valor);
    
    printf("Valor original: %.2f \n", valor);
    *p = *p * 2;
    
    printf("Dobro: %.2f",valor);
    
    
    
    return 0;
}
