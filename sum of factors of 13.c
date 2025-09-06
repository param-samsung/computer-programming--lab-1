#include <stdio.h>
int main() {
    int a;
    a=0;
for(int i=1;i<=100;i++){
    if (i%13==0)
    a=a+i;
}printf("sum of all factors of 13 %d",a);
}
