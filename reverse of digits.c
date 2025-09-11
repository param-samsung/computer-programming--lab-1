#include <stdio.h>

int reverseNumber(int num) {
    int rev = 0, sign = (num < 0) ? -1 : 1;
    num = (num < 0) ? -num : num;

    while (num) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return sign * rev;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", reverseNumber(number));
    return 0;
}

