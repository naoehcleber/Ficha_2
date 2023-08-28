#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

char dia[20];
printf("DIgite um dia da semana: ");
scanf("%s",&dia);
if (strcmp(dia, "sabado") == 0 ||strcmp(dia, "domingo") == 0  ){
    printf("Final de semana");
}else {
    printf("Dia util");
}


return 0;
}
