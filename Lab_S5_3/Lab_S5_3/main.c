//
//  main.c
//  Lab_S5_3
//
//  Created by Le Vinh Hung on 29/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number1, number2;
    do {
        printf("Input the first number: ");
        scanf("%d", &number1);
        printf("Input the second number: ");
        scanf("%d", &number2);
    } while (number1 <= 0 && number2 <=0 && number1 == number2);
    int maxDivisor = 0;
    if(number1 > number2) {
        for (int i = 1; i <= number2; i++) {
            if(number1 % i == 0 && number2 % i == 0) {
                maxDivisor = i;
            }
        }
        printf("Max divisor of %d and %d: %d\n", number1, number2, maxDivisor);
    } else {
        for (int i = 1; i <= number1; i++) {
            if(number1 % i == 0 && number2 % i == 0) {
                maxDivisor = i;
            }
        }
        printf("Max divisor of %d and %d: %d\n", number1, number2, maxDivisor);
    }
    return 0;
}
