//Write a program to swap the first and last digit of a number
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, temp, swappedNum, multiplier = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10;

    while (temp >= 10) {
        temp = temp / 10;
        digits++;
        multiplier *= 10; 
    }

    firstDigit = temp;

    if (digits == 0) {
        swappedNum = num;
    } else {
        int middle = num % multiplier;    
        middle = middle / 10;             

        swappedNum = lastDigit * multiplier + middle * 10 + firstDigit;
    }

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
