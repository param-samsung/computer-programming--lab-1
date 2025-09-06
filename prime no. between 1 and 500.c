#include <stdio.h>
#include <math.h>
int main() {
int a;
int trig=0;
for(a=2;a<=500;(a++,trig=0)){{
    for(int i=2;(a>1,i<=sqrt(a));i++){
        if(a%i==0){
            trig=1;
        }
}
if(trig==0)
printf("%d \n",a);
}}}
