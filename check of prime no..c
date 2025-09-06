#include <stdio.h>
#include <math.h>
int main() {
int a;
printf("Enter the number:");
scanf("%d",&a);
int trig=0;
if(a<=1){
    printf("the number %d is not prime.",a);
}
else{
    for(int i=2;(a>1,i<=sqrt(a));i++){
        if(a%i==0){
            trig=1;
        }
    }
if(trig==1){
    printf("the number %d is not prime.",a);
}
if(trig==0){
    printf("the number %d is prime.",a);
}
}}
