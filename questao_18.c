#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

int number;
printf("digitse sua idade :");
scanf("%d", &number);
if (1<number && number<13){
    printf("Crianca \n");
} else if (13<=number && number<18){
    printf("Adolescente \n");
} else if (number>=18){
    printf("Adulto \n");
}else{
    printf("bebe \n");
}

return 0;
}
