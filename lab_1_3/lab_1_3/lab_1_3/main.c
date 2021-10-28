//
//  main.c
//  lab_1_3
//
//  Created by Le Vinh Hung on 26/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int numberOfDay;
        printf("Input day: ");
        scanf("%d", &numberOfDay);
        int numberOfMonth;
        printf("Input month: ");
        scanf("%d", &numberOfMonth);
        int day;
        if(numberOfMonth == 1){
            day = numberOfDay;
        } else if (numberOfMonth == 2) {
            day = 31 + numberOfDay;
        } else if (numberOfMonth == 3) {
            day = 31 + 28 + numberOfDay;
        } else if (numberOfMonth == 4) {
            day = 31 + 28 + 31 + numberOfDay;
        } else if (numberOfMonth == 5) {
            day = 31 + 28 + 31 + 30 + numberOfDay;
        } else if (numberOfMonth == 6) {
            day = 31 + 28 + 31 + 30 + 31 + numberOfDay;
        } else if (numberOfMonth == 7) {
            day = 31 + 28 + 31 + 30 + 31 + 30 + numberOfDay;
        } else if (numberOfMonth == 8) {
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + numberOfDay;
        } else if (numberOfMonth == 9) {
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + numberOfDay;
        } else if (numberOfMonth == 10) {
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + numberOfDay;
        } else if (numberOfMonth == 11) {
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + numberOfDay;
        } else if (numberOfMonth == 12) {
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + numberOfDay;
        }
        
        printf("Day: %d \t", day);
    
    int dayRemainder = day % 7;
        
    switch(dayRemainder) {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 0: printf("Sunday"); break;
    }
        
        
    return 0;
}
