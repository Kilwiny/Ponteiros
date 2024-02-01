/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*questao 3*/
    int v1,v2;
    int *p1, *p2;
    
    p1 = &v1;
    p2 = &v2;
    
    printf("Digite v1 v2: ");
    scanf("%i%i", &v1,&v2);
    
    
    printf("\nNormal: %i | %i", v1,v2);
  
    *p1 = *p1 + *p2;
    
    *p2 = *p1 - *p2;
    
    *p1 = *p1 - *p2;
   
    
    printf("\n Trocado: %i | %i",v1,v2);
    
    
    
    return 0;
}
