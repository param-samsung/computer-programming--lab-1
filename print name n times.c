#include <stdio.h>
int main() {
char a[100];
int b;
printf("enter the name ");
fgets(a,100,stdin);
printf("enter the number");
scanf("%d",&b);
for(int i=1;i<=b;i++){
    printf("%s",a);
}
}
