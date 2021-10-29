//
//  main.c
//  Lab_S5_2
//
//  Created by Le Vinh Hung on 29/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;
    do {
        printf("Input number: ");
        scanf("%d", &number);
    } while (number < 0);
    if(number == 0) {
        printf("0 can divisible by all numbers ");
    } else {
        int sum = 0;
        printf("List of divisor: \n");
        for (int i = 1; i <= number; i++) {
            if(number % i == 0) {
                printf("%d\n", i);
                sum += i;
            }
        }
        printf("Sum of divisor: %d\n", sum);
    }
    return 0;
}
