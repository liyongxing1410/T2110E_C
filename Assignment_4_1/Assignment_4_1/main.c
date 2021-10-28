//
//  main.c
//  Assignment_4_1
//
//  Created by Le Vinh Hung on 28/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;
    printf("Input number: ");
    scanf("%d", &number);
    while (number < 1) {
        printf("Input number must be equal or greater than 1: ");
        scanf("%d", &number);
    }
    float sum = 0;
    for(int i = 1; i <= number; i++){
        sum = sum + (float)1/i;
    }
    printf("Sum: %.2f\n", sum);
    return 0;
}
