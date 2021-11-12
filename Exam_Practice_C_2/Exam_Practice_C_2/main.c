//
//  main.c
//  Exam_Practice_C_2
//
//  Created by Le Vinh Hung on 12/11/2021.
//

#include <stdio.h>

float average (int arr[], int size) {
    int sum = 0;
    int count = 0;
    float average = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        count++;
    }
    average = (float)sum / count;
    return  average;
}

int main(int argc, const char * argv[]) {
    int size;
    printf("Input size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        printf("Input number at position %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Average: %.2f\n", average(arr, size));
    return 0;
}
