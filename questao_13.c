#include <stdio.h>
#include <string.h>
int main(){

float salario, aumento, salarioNovo;

scanf("%f",&salario);
if (salario <= 1500){
    aumento = salario * 0.15;
}
else if (salario >1500){
    aumento = salario * 0.10;
}


salarioNovo = salario + aumento;
printf("Com o aumento de %.2f o salario novo sera %.2f",aumento, salarioNovo);

return 0;
}
