#include <stdio.h>
#include <math.h>

main (){

    //Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.

    float numero;

    printf("Digite um numero: ")
    scanf("%f", &numero);

    if(numero >= 0){
       resultado = sqrt(numero);
        printf("Raiz: %f", resultado);
    }
    else{
       resultado = pow(numero, 2);
        printf("Quadrado: %f", resultado);
    }

    return 0;
}