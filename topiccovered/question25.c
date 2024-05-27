//  WAP program to print below output using for loop
// 01 02 03 04 05 06 07 08 09 10
// 11 12 13 14 15 16 17 18 19 20
// ..............
// ..............
// 41 42 43 44 45 46 47 48 49 50

#include <stdio.h>

int main() {
int i;

    // Printing numbers from 1 to 100
    for (i = 1; i <= 100; i++) {
        // Print leading zero if number is less than 10
        if (i < 10) {
            printf("0%d ", i);
        } else {
            printf("%d ", i);
        }

        // Print a newline after every 10 numbers
        if (i % 10 == 0) {
            printf("\n");
        }
    }

return 0;
}