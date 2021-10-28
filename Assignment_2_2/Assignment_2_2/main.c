//
//  main.c
//  Assignment_2_2
//
//  Created by Le Vinh Hung on 25/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float money = 4000;
    int years = 4;
    float rate = 0.08;
    for(int i = 0; i < years; i++) {
        money = money + money * rate;
        
    };
    printf("Tong so tien: %f \t", money);
    return 0;
}
