#include <stdio.h>

int main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    if (a== 0) {
        printf("0\a");
        return 0;
    }

    int rev = 0, temp = a;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    while (rev > 0) {
        printf("%d ,",rev % 10);
        rev /= 10;
    }

    return 0;
}
