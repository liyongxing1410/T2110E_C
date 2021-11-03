//
//  main.c
//  Lab_S6_3
//
//  Created by Le Vinh Hung on 01/11/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int numberOfArray;
    printf("Input number of array: ");
    scanf("%d", &numberOfArray);
    
    int arr[numberOfArray];
    for (int i = 0; i < numberOfArray; i++) {
        printf("Input number at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    int findNumber;
    int check = 0;
    printf("Input find number: ");
    scanf("%d", &findNumber);
    
    for (int i = 0; i < numberOfArray; i++) {
        if(findNumber == arr[i]){
            printf("Find number has been existed in array!\n");
            check = 1;
            break;
        }
    }
    if(check == 0){
        printf("Find number hasn't been existed in array!\n");
    }
    return 0;
}
