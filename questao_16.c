#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

int number;
scanf("%d", &number);
switch (number){
case 1:
    printf("Muito insuficiente");
    break;
case 2:
    printf("Insuficiente");
    break;
case 3:
    printf("Regular");
    break;
case 4:
    printf("Bom");
    break;
case 5:
    printf("Muito bom");
    break;


}

return 0;
}
