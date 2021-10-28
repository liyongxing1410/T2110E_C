//
//  main.c
//  lab_1_1
//
//  Created by Le Vinh Hung on 25/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;
    printf("Input number: ");
    scanf("%d" , &number);
    switch (number) {
        case 1: printf("Not a week day");
            break;
        case 2: printf("Monday");
            break;
        case 3: printf("Tuesday");
            break;
        case 4: printf("Wednesday");
            break;
        case 5: printf("Thursday");
            break;
        case 6: printf("Friday");
            break;
        case 7: printf("Saturday");
            break;
        case 8: printf("Sunday");
            break;
        default: printf("Invalid input");
    }
    return 0;
}
