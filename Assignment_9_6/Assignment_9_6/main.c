//
//  main.c
//  Assignment_9_6
//
//  Created by Le Vinh Hung on 10/11/2021.
//

#include <stdio.h>

int lcm(int num1, int num2){
    int i, max, lcm=1;
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    i = max;
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm = i;
            break;
        }
        i += max;
    }
    printf("LCM of %d and %d = %d", num1, num2, lcm);
    return 0;
}
