//
//  main.c
//  Assignment_4_2
//
//  Created by Le Vinh Hung on 28/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        if(i % 2 != 0) {
            sum = sum + i;
        }
    }
    printf("Total odd number: %d\n", sum);
    return 0;
}
