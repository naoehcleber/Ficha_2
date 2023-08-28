#include <stdio.h>
int main(){
float a,b,c,media;
scanf("%f %f %f", &a,&b,&c);
media = (a+b+c)/3;

if (media <7){
    printf("Reprovado");
}
else if (media >=7){
    printf("Aprovado");
}

return 0;
}
