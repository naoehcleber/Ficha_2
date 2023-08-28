#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

char ch;
printf("DIgite um simbolo de pontuacao: ");
ch = getchar();
switch (ch){
case '.' :
    printf("Ponto \n");
    break;
case ',':
    printf("Virfula \n");
    break;
case ':':
    printf("Dois pontos \n");
    break;
case ';' :
    printf("Ponto e virgula \n");
    break;
default :
    printf("nao eh pontuacao \n");
}


return 0;
}
