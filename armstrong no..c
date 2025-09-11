#include <stdio.h>
#include <math.h>

int main() {
    int number, original, sum = 0, digits = 0;
    scanf("%d", &number);

    original = number;
    if (number < 0) {
        printf("Not an Armstrong number\n");
        return 0;
    }

    // Count digits
    int temp = number;
    while (temp) {
        digits++;
        temp /= 10;
    }

    temp = number;
    while (temp) {
        int digit = temp % 10;
        sum += pow(digit, digits);  // Raise digit to the power of digits
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}

