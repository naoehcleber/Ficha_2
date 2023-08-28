#include <stdio.h>
#include <string.h>
int main(){

int number, calculo;

scanf("%d", &number);

if ((number%5 == 0) && (number%3 == 0)){
    printf("Divisivel por 5 e 3");
}
else {
    printf("Não divisivel por 5 e 3");
}
return 0;
}
