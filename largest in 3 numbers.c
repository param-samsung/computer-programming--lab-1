#include <stdio.h>
int main() {
int a,b,c;
printf("�nter 1st number");
scanf("%d",&a);
printf("�nter 2st number");
scanf("%d",&b);
printf("�nter 3st number");
scanf("%d",&c);
if(a>b){
    if(a>c)
    printf("%d is largest",a);
    else
    printf("%d is largest",c);
    }
else
printf("%d is largest",b);

}
