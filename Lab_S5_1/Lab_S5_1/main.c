//
//  main.c
//  Lab_S5_1
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
    printf("List of even number: \n");
    for (int i = 1; i < number; i++) {
        if(i % 2 == 0) {
            printf("%d \n", i);
        }
    }
    return 0;
}
