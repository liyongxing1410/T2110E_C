//
//  main.c
//  Assignment_9_5
//
//  Created by Le Vinh Hung on 10/11/2021.
//

#include <stdio.h>

int gcd(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}
