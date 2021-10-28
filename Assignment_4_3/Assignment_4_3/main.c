//
//  main.c
//  Assignment_4_3
//
//  Created by Le Vinh Hung on 28/10/2021.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int firstEdge,secondEdge,thirdEdge;
    do {
        printf("Input first edge: ");
        scanf("%d", &firstEdge);
        printf("Input second edge: ");
        scanf("%d", &secondEdge);
        printf("Input third edge: ");
        scanf("%d", &thirdEdge);
    } while (firstEdge < 0 || secondEdge < 0 || thirdEdge < 0);
    
    int perimeter = firstEdge + secondEdge + thirdEdge;
    printf("The perimeter of triangle: %d\n", perimeter);
    
    float area = sqrt(perimeter * (perimeter - firstEdge) * (perimeter * secondEdge) * (perimeter * thirdEdge));
    
    printf("The area of triangle: %f\n", area);
    return 0;
}
