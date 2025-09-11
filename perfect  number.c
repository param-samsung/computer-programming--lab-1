#include <stdio.h>

int main() {
    int number, sum = 0;
    scanf("%d", &number);

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");

    return 0;
}

