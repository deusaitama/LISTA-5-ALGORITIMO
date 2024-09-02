/*7 – Elabore um programa onde seja declarado um vetor de nome A para armazenar 1000(mil) números inteiros.
O programa deve executar os seguintes passos:
a) Atribuir números inteiros aleatórios de 0 a 99 para preencher o vetor A;
b) Mostrar na tela o maior elemento do vetor A;
c) Mostrar na tela o menor elemento do vetor A;
d) Mostrar na tela o segundo maior elemento do vetor A.

*/


#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define num 1000

int main()
{
    int i,k=0,a[num],maior,maior2,menor;
    srand(time(NULL));
    a[0]=rand()%100;
    maior=a[0];
    menor=a[0];
    maior2=-1;
    printf("%i ",a[0]);

    for(i=1;i<num;i++){
        a[i]=rand()%100;
        printf("%i ",a[i]);
        if(a[i]>maior){
            maior2=maior;
            maior=a[i];
        }
        if(a[i] > maior2 && a[i] < maior){
            maior2=a[i];
        }
        if(menor>a[i]){
            menor=a[i];
        }


    }
    printf("\nO maior numero exibido eh:%i\n",maior);
    printf("O menor numero exibido eh:%i\n",menor);
    printf("O segundo maior numero exibido eh:%i\n",maior2);




    return 0;
}
