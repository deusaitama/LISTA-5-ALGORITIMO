/*6 – Elabore um programa onde seja declarado um vetor de nome A para armazenar 1000(mil) números inteiros.
O programa deve executar os seguintes passos:
a) Atribuir números inteiros aleatórios de 0 a 99 para preencher o vetor A;
b) Mostrar na tela a SOMA de todos os elementos do vetor A;
c) Mostrar na tela a SOMA dos números(elementos) pares do vetor A;
d) Mostrar na tela a MÉDIA dos números(elementos) ímpares do vetor A.
*/


#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define num 1000

int main()
{
    int i,k=0,a[num];
    float soma1=0,soma2=0,soma3=0,media;
    srand(time(NULL));
    for(i=0;i<num;i++){
        a[i]=rand()%100;
        printf("%i ",a[i]);
        soma1=soma1+a[i];
        if(a[i]%2==0){
            soma2=soma2+a[i];
        }else{
            soma3=soma3+a[i];
            k++;
        }
    }
    printf("\nA soma dos elementos do vetor A eh:%.0f\n",soma1);
    if(soma2==0){
        printf("Nao foram digitados numeros pares\n");
    }else{
        printf("A soma dos elementos pares do vetor A eh:%.0f\n",soma2);
    }
    if(k==0){
        printf("Nao foram digitados numeros impares\n");
    }else{
        media=soma3/k;

        printf("A media dos elementos impares do vetor A eh:%.2f\n",media);
    }

    return 0;
}
