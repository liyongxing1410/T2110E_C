//
//  main.c
//  Assignment_4_4
//
//  Created by Le Vinh Hung on 28/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;
    
    do {
        printf("Input number: ");
        scanf("%d", &number);
    } while (number < 0);
    
    int f0 = 0, f1 = 1, f2 = 1;
    
    if (number == f0) {
        printf("The number value in F0: 0\n");
        return 1;
    } else if (number == f1) {
        printf("The number value in F1: 1\n");
        return 1;
    } else if (number == f2) {
        printf("The number value in F2: 1\n");
        return 1;
    }
    
    int sum = 0;
    for(int i = 3; i <= number; i++){
        sum = f1 + f2;
        f1 = f2;
        f2 = sum;
    }
    
    printf("The number value in F%d: %d\n", number, sum);
    return 0;
}
