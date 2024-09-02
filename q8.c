/*8 – Elabore um programa onde seja declarado um vetor de nome A para armazenar 1000(mil) números inteiros.
O programa deve executar os seguintes passos:
a) Atribuir números inteiros aleatórios de 0 a 99 para preencher o vetor A;
b) Solicitar que seja digitado um número inteiro X e ler o número digitado;
c) Após a leitura do número X seu programa deverá “dizer” quantas vezes o número X ocorre no vetor A.

*/


#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define num 1000
int main()
{
    int i,k=0,a[num],b;
    srand(time(NULL));
    a[0]=rand()%100;

    for(i=0;i<num;i++){
        a[i]=rand()%100;
        printf("%i ",a[i]);
    }
    printf("\nDigite um numero: ");
    scanf("%i",&b);
    for(i=0;i<num;i++){
        if(b==a[i]){
            k++;
        }
    }
    if(k==0){
        printf("O numero digitado nao aparece entre os elementos\n");
    }else
        if(k==1){
            printf("O numero digitado que eh %i aparece %i vez no vetor A",b,k);
        }else
            printf("O numero digitado que eh %i aparece %i vezes no vetor A",b,k);




    return 0;
}
