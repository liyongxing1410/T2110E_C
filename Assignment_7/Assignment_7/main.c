//
//  main.c
//  Assignment_7
//
//  Created by Le Vinh Hung on 03/11/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int choice;
    do {
        printf("1. Chon mon an\n");
        printf("2. Goi do uong\n");
        printf("3. Thanh toan\n");
        printf("4. Thoat chuong trinh\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        int choiceFood;
        int choiceDrink;
        switch (choice) {
            case 1:
                do {
                    printf("1: Com ga\n");
                    printf("2: Pho\n");
                    printf("3: Bun\n");
                    printf("4: Quay lai\n");
                    printf("Lua chon cua ban: ");
                    scanf("%d", &choiceFood);
                    
                    switch(choiceFood) {
                        case 1:
                            printf("Cam on khach hang da lua chon!\n");
                            break;
                            
                        case 2:
                            printf("Cam on khach hang da lua chon!\n");
                            break;
                            
                        case 3:
                            printf("Cam on khach hang da lua chon!\n");
                            break;
                            
                        case 4:
                            break;
                    }
                } while (choiceFood != 1 && choiceFood != 2 && choiceFood != 3 && choiceFood != 4);
                choice = 0;
                break;
                
            case 2:
                do {
                    printf("1: Coffe\n");
                    printf("2: Nuoc ep\n");
                    printf("3: Sinh to\n");
                    printf("4: Quay lai\n");
                    printf("Lua chon cua ban: ");
                    scanf("%d", &choiceDrink);
                    
                    switch(choiceDrink) {
                        case 1:
                            printf("Cam on khach hang da lua chon!\n");
                            break;
                            
                        case 2:
                            printf("Cam on khach hang da lua chon!\n");
                            break;
                            
                        case 3:
                            printf("Cam on khach hang da lua chon!\n");
                            break;
                            
                        case 4:
                            break;
                    }
                } while (choiceDrink != 1 && choiceDrink != 2 && choiceDrink != 3 && choiceDrink != 4);
                choice = 0;
                break;
                
            case 3:
                printf("So tien can thanh toan la: 100.000 VND!\n");
                break;
                
            case 4:
                printf("Xin chao va hen gap lai!\n");
                break;
                
            default:
                printf("Moi chon lai!\n");
                break;
        }
    } while (choice != 1 && choice != 2 && choice != 3 && choice != 4);
    return 0;
}
