#include <stdio.h>
#include <string.h>
int main(){

char a;
scanf("%c",&a);

if (a == 'a'|| a=='e'|| a=='i'||a=='o'||a=='u'){
    printf("vogal !");
}
else{
    printf("Consoante !");
}

return 0;
}
