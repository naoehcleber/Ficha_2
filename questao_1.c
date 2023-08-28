#include <stdio.h>
#include <string.h>
int main(){

int number;
printf("DIgite um numero inteiro: ");
scanf("%d", &number);
if (number>10){
    printf("O valor eh maior que 10 \n")
}
else if (number == 10){
    printf("O numero eh 10");
}
else {
    printf("O valor eh menor que 10");
}
return 0;
}
