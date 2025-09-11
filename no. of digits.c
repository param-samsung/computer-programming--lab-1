#include <stdio.h>

int main() {
    int a,b=0;
    printf("Enter number: ");
    scanf("%d", &a);
    while(a>0){
    a=a/10;
    b=b+1;
   }
     printf("digits of number %d",b);
}

