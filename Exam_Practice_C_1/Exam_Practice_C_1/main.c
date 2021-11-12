//
//  main.c
//  Exam_Practice_C_1
//
//  Created by Le Vinh Hung on 12/11/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;
    printf("Input size of array: ");
    scanf("%d", &number);
    
    int arr[number];
    
    for (int i = 0; i < number; i++) {
        printf("Input number at position %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    int lastEvenNumber = 0;
    int flag = 0;
    for (int i = 0; i < number; i++) {
        if(arr[i] % 2 == 0 && arr[i] != 0) {
            lastEvenNumber = arr[i];
            flag = 1;
        }
    }
    
    if(flag !=1 ) {
        printf("No EVEN number\n");
    } else {
        printf("The last even number: %d\n", lastEvenNumber);
    }
    
    return 0;
}
