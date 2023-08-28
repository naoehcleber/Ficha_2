#include <stdio.h>
#include <string.h>
int main(){

int a,b,c, menor, maior;
scanf("%d %d %d",&a,&b,&c);

// a>b>c a>c>b
// b>a>c b>c>a
// c>b>a
if (a>b>c){
    printf("%d > %d > %d",a,b,c);
}
else if (a>c>b){
    printf("%d > %d > %d",a,c,b);
}
else if (b>a>c){
    printf("%d > %d > %d",b,a,c);
}
else if(b>c>a){
    printf("%d > %d >%d",b,c,a);
}
else if (c>b>a){
    printf("%d > %d >%d",c,b,a);
}
else if (c>a>b){
    printf("%d > %d >%d",c,a,b);
}
return 0;
}
