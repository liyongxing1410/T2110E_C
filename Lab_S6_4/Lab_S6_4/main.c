//
//  main.c
//  Lab_S6_4
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
    int oddNumber;
    for (int i = 0; i < numberOfArray; i++) {
        if(arr[i] % 2 !=0 ) {
            oddNumber = arr[i];
        }
    }
    printf("The final odd number in array: %d\n", oddNumber);
    return 0;
}
