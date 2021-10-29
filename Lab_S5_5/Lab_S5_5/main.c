//
//  main.c
//  Lab_S5_5
//
//  Created by Le Vinh Hung on 29/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int firstNumber, secondNumber;
    do {
        printf("Input first number: ");
        scanf("%d", &firstNumber);
        printf("Input second number: ");
        scanf("%d", &secondNumber);
    } while (firstNumber <= 0 || secondNumber < 0 || firstNumber > secondNumber);
    printf("List of prime number from %d to %d:\n", firstNumber, secondNumber);
    for (int i = firstNumber; i <= secondNumber; i++) {
        int flag = 1;
        for (int j = 2; j < i; j++) {
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag && i != 1) {
            printf("%d\n", i);
        }
    }
    return 0;
}
