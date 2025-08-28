#include <stdio.h>
int main() {
float a,b;
printf("gross salary is: ");
scanf("%f",&a);
if(a>10000)
b = a*107/100;
if(a>5000 && a<10000)
b = a*105/100;

printf("net salary is %f ",b);

}
