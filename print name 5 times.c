#include <stdio.h>
int main() {
char a[100];
printf("enter the name ");
fgets(a,100,stdin);
for(int i=1;i<=5;i++){
    printf("%s",a);
}
}
