//
//  main.c
//  Lab_S6_1
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
    int sum = 0;
    int count = 0;
    for (int i = 0; i < numberOfArray; i++) {
        if(arr[i] % 2 != 0){
            sum += arr[i];
            count++;
        }
    }
    float average = sum / count;
    printf("Average of odd number in array: %.2f\n", average);
    return 0;
}
