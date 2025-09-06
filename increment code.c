#include <stdio.h>
int main() {
int a = 5,b = 3,c =4,d = 6,e;
e = a++ - --b * ++c - d--;
printf("%d %d %d %d %d\n",a,b,c,d,e);}
