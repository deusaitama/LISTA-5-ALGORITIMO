
/*5 � Elabore um programa onde seja declarado um vetor de nome A para armazenar 50 n�meros inteiros.
O programa deve executar os seguintes passos:
a) Atribuir n�meros inteiros aleat�rios de tr�s d�gitos (100 a 999) para preencher o vetor A;
b) Mostrar em uma linha apenas os elementos do vetor A que s�o m�ltiplos de 10;
c) Mostrar em outra linha apenas os elementos do vetor A que s�o m�ltiplos de 3.
*/


#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int i,A[50];
    float soma1=0,soma2=0,s[9],p[9],m[9],media1,media2;
    srand(time(NULL));

    for(i=0;i<50;i++){
        A[i]=rand()%900+100;
        printf("%i ",A[i]);
    }

    printf("\n\n");
    for(i=0;i<50;i++){
        if(A[i]%10==0)
        printf("%i ",A[i]);
    }
    printf("\n\n");
    for(i=0;i<50;i++){
        if(A[i]%3==0)
        printf("%i ",A[i]);
    }


    return 0;
}
