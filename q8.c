/*8 � Elabore um programa onde seja declarado um vetor de nome A para armazenar 1000(mil) n�meros inteiros.
O programa deve executar os seguintes passos:
a) Atribuir n�meros inteiros aleat�rios de 0 a 99 para preencher o vetor A;
b) Solicitar que seja digitado um n�mero inteiro X e ler o n�mero digitado;
c) Ap�s a leitura do n�mero X seu programa dever� �dizer� quantas vezes o n�mero X ocorre no vetor A.

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
