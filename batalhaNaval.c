#include <stdio.h>
int main () {
    int mar[10][10] = {0};

    printf("   A B C D E F G H I J\n");

    mar[4][7] = 3;
    mar[4][8] = 3;
    mar[4][9] = 3;

    mar[0][2] = 3;
    mar[1][2] = 3;
    mar[2][2] = 3;

    mar[6][1] = 3;
    mar[7][2] = 3;
    mar[8][3] = 3;

    mar[1][6] = 3;
    mar[2][7] = 3;
    mar[3][8] = 3;

    for (int i = 0; i < 9; i++) {
        printf(" %d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", mar[i][j]);
        }
        printf("\n");
    }
    for (int i = 9; i < 10; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 10; j++) {
        printf("%d ", mar[i][j]);
        }    
        printf("\n");
    }

    
    return 0;

}