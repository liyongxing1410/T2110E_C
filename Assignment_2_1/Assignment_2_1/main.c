//
//  main.c
//  Assignment_2_1
//
//  Created by Le Vinh Hung on 25/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;
    int reverseNumber = 0;
    printf("Nhap so: ");
    scanf("%d", &number);
    
    while(number <= 0) {
        printf("Moi nhap lai: ");
        scanf("%d", &number);
    }
    
    while (number > 9999) {
        printf("Moi nhap lai: ");
        scanf("%d", &number);
    }
    while (number > 0) {
        int lastDigit = number % 10;
        reverseNumber = reverseNumber * 10 + lastDigit;
        number /= 10;
    }
    
    printf("So dao nguoc: %d \t", reverseNumber);
}
