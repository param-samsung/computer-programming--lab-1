#include <stdio.h>
int main() {
float a,b;
printf("gross sales is: ");
scanf("%f",&a);
if(a>20000)
b = a*85/100;
if(a>10000 && a<20000)
b = a*90/100;
else if(a<=10000)
b = a*95/100;
printf("net sales is: %f",b);

}
