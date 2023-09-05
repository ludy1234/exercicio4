#include <stdio.h>

main (){

    //Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 

    int A = 100, B = 100, C = 130, D = 15; 

    //achar o menor de todos

    if(A > B && A > c && A > D){
        maior = A;
    } else if{B > A && B > c && B > D
        maior = B;
    }else if{C > A && C > B && C > D
        maior = C;
    }else{
        maior = D;
    }
    
    //achar o menor de todos

     if(A < B && A < c && A < D){
        menor = A;
    } else if{B < A && B < c && B < D
        menor = B;
    }else if{C < A && C < B && C < D
        menor = C;
    }else{
        menor = D;
    }
    printf("Maior: %d", maior);
    printf("Menor: %d", menor);

    return 0;
}