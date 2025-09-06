#include <stdio.h>
#include <math.h>
int main(){
int a=0,b=0,c=0,d;
printf("enter the number: ");
scanf("%d",&a);
b=a;
while(b>0){
    b=b/10;
    c++;
}
d=pow(10,c-1);
int y=a%d;
if(y*y==a){printf("number is automorphic ");}}
