//
//  main.c
//  Assignment_8
//
//  Created by Le Vinh Hung on 08/11/2021.
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
    int temp;
    for (int i = 0; i < numberOfArray; i++) {
        for (int j = i + 1; j < numberOfArray; j++) {
            if(arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The sorting array: ");
    for (int i = 0; i < numberOfArray; i++) {
        printf("%d", arr[i]);
    }
    
    return 0;
}
