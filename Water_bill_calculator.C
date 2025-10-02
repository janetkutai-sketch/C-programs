//program to prompt the user to enter number of water units consumed
/*
NAME: Kutayi Janet Ayoti 
REG NO: PA106/G/28769/25
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt the user
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculate the bill using if-else statements
    if (units <= 30) {
        bill = units * 20.0;
    } else if (units <= 60) {
        bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else {
        bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    // Output the bill with 2 decimal places
    printf("Total water bill: %.2f KES\n", bill);

    return 0;

}
