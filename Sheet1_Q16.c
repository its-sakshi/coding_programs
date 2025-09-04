//       *
//      ***
//     *****
//    *******
//   *********
// C program to print a pyramid pattern of stars using nested for loops.

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int k = 1; k <= rows - i; k++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
