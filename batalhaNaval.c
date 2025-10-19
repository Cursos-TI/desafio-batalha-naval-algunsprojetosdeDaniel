#include <stdio.h>
int main () {
    int mar[10][10] = {0};

    printf("   A B C D E F G H I J\n");

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