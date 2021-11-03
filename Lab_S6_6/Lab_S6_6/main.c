//
//  main.c
//  Lab_S6_6
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
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < numberOfArray; i++) {
        
        if(arr[i] <= 0){
            count = 0;
        }else{
            count++;
            if(count >= maxCount){
                maxCount = count;
            }
        }
    }
    printf("Maximum number of consecutive positive numbers: %d\n", maxCount);
    return 0;
}
