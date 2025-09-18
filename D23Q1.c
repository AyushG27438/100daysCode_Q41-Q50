//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator, denominator;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        numerator = 2 * i;                    // Numerator: 2, 4, 6, 8, ...
        denominator = 4 * i - 1;              // Denominator: 3, 7, 11, 15, ...

        sum += (float)numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
