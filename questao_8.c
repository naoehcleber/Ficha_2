#include <stdio.h>
#include <string.h>
int main(){

char a[20],b[20];
printf("Digite um nome : ");
scanf("%s", &a);
printf("Digite outro nome : ");
scanf("%s", &b);
if(strlen(a) > strlen(b)){
    printf("%s eh o nome com mais caracteres",a);
}
else if (strlen(b) > strlen(a)){
    printf("%s eh o nome com mais caracteres",b);
}



return 0;
}
