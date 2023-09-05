#include <stdio.h>

main (){

    //Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).
   int A = 10, B = 20, C = 30;

    if(A > B && A > C){
        if(B > C){
            printf("%d, %d, %d", A, B , C);
        }else{
            printf("%d, %d, %d", A, C, B);
        }
    }else if(B > A && B > C){
        if(A > C);
         printf("%d, %d, %d", B, A, C);
    }else{
         printf("%d, %d, %d", B, C, A);
    }
    else{
    if(A > B){
         printf("%d, %d, %d", C, B, A);
    }else{
         printf("%d, %d, %d", C, A, B);
    }
    }
    
    
}