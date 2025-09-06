#include <stdio.h>
int main(){
int i,a,b,c;
printf("enter the number:");
scanf("%d",&b);
printf("n even numbers are: \n");
a = 0;
for(i=1;i<=b;i++){
a = a+2;
c = c+a;
printf("%d\n",a);}
printf("sum of first n even numbers are =%d",c);
}
