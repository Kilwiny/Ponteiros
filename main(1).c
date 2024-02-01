/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void ordenar(int *a, int *b){
    int temp;
    
    if(*a>*b){
        temp =*a;
        
        *a = *b;
        
        *b = temp;
    }else{
        temp = *b;
        
        *b = *a;
        
        *a = temp;
    }
    
}

int main()
{
    /* Troca de valores - questao 1*/
    int v1, v2,v3;
    
    printf("Digite v1, v2 e v3: ");
    scanf("%i%i%i", &v1,&v2,&v3);
    
    printf("Inicial: (%d) (%d) (%d)\n", v1,v2,v3);
    
    if(v1>v2 && v2>v3 && v1>v3){ // 10 9 8
        ordenar(&v1, &v3);
    }else if(v1>v2 && v2<v3 && v1>v3){ // 7 2 6
        ordenar(&v1, &v2);
        ordenar(&v3,&v2);
    }else if(v2>v1 && v1>v3 && v2>v3){ // 5 7 3
        ordenar(&v1, &v3);
        ordenar(&v3, &v2);
    }else if(v2>v3 && v3>v1 && v2>v1){ //2 7 6
        ordenar(&v2, &v3);
    }else if(v3>v2 && v1>v2 && v3>v1){ // 8 1 10
        ordenar(&v1, &v2);
    }
    
    printf("Ordenado: (%d) (%d) (%d)\n", v1,v2,v3);
    
    return 0;
}
