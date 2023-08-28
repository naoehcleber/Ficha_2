#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

char estadoCivil[20];
printf("Digite seu estado civil \n");
scanf("%s", &estadoCivil);
//como a linguagem C nao suporta strings no switch case, o programa ira comparar a primeira letra da string como metodo de decidir qual case
switch (estadoCivil[0]){
case 's':
    printf("Solteiro");
    break;
case 'c':
    printf("Casado");
    break;
case 'd':
    printf("Divorciado");
    break;
case 'v':
    printf("Viuvo");
    break;


}

return 0;
}
