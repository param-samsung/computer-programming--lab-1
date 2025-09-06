#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("numbers after swapping: ");
    printf("first number: %d",a);
    printf("second number: %d",b);
    return 0;
}
