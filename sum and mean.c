#include <stdio.h>
int main() {
float a,b,c;
c=0;
for(int i =1;i<=10;(i++,a=0)){
    printf("enter the %d number",i);
    scanf("%f",&a);
    c=c+a;}
printf("sum of numbers %f",c);
b=c/10;
printf("mean of numbers %f",b);
}
