//
//  main.c
//  Lab_S5_4
//
//  Created by Le Vinh Hung on 29/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;
    do {
        printf("Input number: ");
        scanf("%d", &number);
    } while (number <= 0);
    if(number == 1) {
        printf("There are have no prime number!\n");
    } else {
        printf("List of prime number:\n");
        for (int i = 2; i <= number; i++) {
            int flag = 1;
            for (int j = 2; j < i; j++) {
                if(i % j == 0) {
                    flag = 0;
                    break;
                }
            }
            if(flag) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
