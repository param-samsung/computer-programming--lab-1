#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    if (num < 0) num = -num;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", sumOfDigits(number));
    return 0;
}
