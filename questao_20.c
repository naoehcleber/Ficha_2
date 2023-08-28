#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

int a,b,soma,subtracao,multiplicacao,divisao, escolha;
printf("Insira dois numero inteiros : ");
scanf("%d %d", &a,&b);
soma = a +b;
subtracao = a-b;
multiplicacao = a*b;
divisao = a/b;
printf("Escolha uma operacao aritmetica :\n 1 - soma \n 2 - subtracao \n 3 - multiplicacao \n 4 - divisao \n");
scanf("%d", &escolha);
switch (escolha){
case 1 :
    printf("Soma %d", soma);
    break;
case 2 :
    printf("Subtracao %d", subtracao);
    break;
case 3 :
    printf("Multiplicacao %d", multiplicacao);
    break;
case 4 :
    printf("Divisao %d", divisao);
    break;
}




return 0;
}
