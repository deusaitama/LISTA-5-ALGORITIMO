
/*3 – Faça um programa que leia os valores de dois vetores de números reais A e B, com 9 elementos cada. Em seguida o programa
deve mostrar em tela:
a) a média dos valores do vetor A;
b) a média dos valores do vetor B;
c) os 9 elementos de um vetor S, onde seus valores são definidos pelas somas dos elementos da posição correspondente de A e B;
d) os 9 elementos de um vetor P, onde seus valores são definidos pelos produtos dos elementos da posição correspondente de A e B;
e) os 9 elementos de um vetor M, onde seus valores são definidos pelas médias dos elementos da posição correspondente de A e B.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[9],b[9],c[9],i;
    float soma1=0,soma2=0,s[9],p[9],m[9],media1,media2;

    printf("Digite abaixo os 9 valores do vetor A\n");
    for(i=0;i<9;i++){
        printf("Digite o %i%c numero do vetor A: ",i+1,167);
        scanf("%i",&a[i]);
        soma1=soma1+a[i];
    }

    printf("Agora digite abaixo os valores do Vetor B\n");
    for(i=0;i<9;i++){
        printf("Digite o %i%c numero do vetor B: ",i+1,167);
        scanf("%i",&b[i]);
        soma2=soma2+b[i];
    }

    media1=soma1/9; //a
    media2=soma2/9; //b
    printf("A media dos numeros do vetor A eh:%.2f\n",media1);
    printf("A media dos numeros do vetor B eh:%.2f\n",media2);

    for(i=0;i<9;i++){
        s[i]=a[i]+b[i];
        printf("O %i%c valor do vetor S eh:%.2f\n",i+1,167,s[i]);
    }
    for(i=0;i<9;i++){
        p[i]=a[i]*b[i];
        printf("O %i%c valor do vetor P eh:%.2f\n",i+1,167,p[i]);
    }
    for(i=0;i<9;i++){
        m[i]=s[i]/2;
        printf("O %i%c valor do vetor M eh:%.2f\n",i+1,167,m[i]);
    }


    return 0;
}
