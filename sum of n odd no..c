#include <stdio.h>
int main(){
int i,a,b,c;
printf("enter the number:");
scanf("%d",&b);
printf("n odd numbers are: \n");
a = 1;
for(i=1;i<=b;i++){
printf("%d\n",a);
a = a+2;
c = c+a;
}
printf("sum of first n odd numbers are =%d",c);
}
