
/*4 � Elabore um programa onde seja declarado um vetor de nome A para armazenar 100(cem) n�meros inteiros.
O programa deve executar os seguintes passos:
a) Atribuir n�meros inteiros aleat�rios de 0 a 500 para preencher os 100 elementos do vetor A; A[i] = rand() % 501 ;
PARA GERAR N�MEROS ALEAT�RIOS EM C VEJA O EXEMPLO DO MOODLE OU PESQUISE A FUN��O �RAND�.
b) Mostrar na tela os elementos do vetor A separados por v�rgula.
*/


#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int i,A[100];
    float soma1=0,soma2=0,s[9],p[9],m[9],media1,media2;
    srand(time(NULL));

    for(i=0;i<100;i++){
        A[i]=rand()%501
        printf("%i, ",A[i]);
    }


    return 0;
}
