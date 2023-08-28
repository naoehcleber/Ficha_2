#include <stdio.h>
#include <string.h>
int main(){

float peso, altura, IMC;

printf("Insira seu peso e altura: ");
scanf("%f %f", &peso,&altura);
IMC = peso/(altura * altura);

if (IMC < 18.50){
    printf("Abaixo do peso \n");
}
else if (18.50 <= IMC < 25.00){
    printf("Peso normal \n");
}
else if (25.00 <= IMC <30.00){
    printf("Acima do peso \n");
}
else if (30.00 <=IMC){
    printf("Obesidade \n");
}
return 0;
}
