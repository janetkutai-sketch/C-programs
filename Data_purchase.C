//program to purchase data
/*
NAME:Kutayi Janet Ayoti
REG NO:PA106/G/28769/25
*/
#include<stdio.h>

int main() {
    int choice;

    // display cost of data
    printf("Mobile Data Bundle Purchase\n");
    printf("1.100 MB  @50 KES\n");
    printf("2.500 MB  @200 KES\n");
    printf("3.1 GB    @350 KES\n");
    printf("4.2 GB    @600 KES\n");

    // Prompt the user to enter choice
    printf("Enter your choice (1–4): ");
    scanf("%d", &choice);

    //selection 
    switch (choice) {
        case 1:
            printf("You selected 100 MB bundle. Cost: 50 KES\n");
            break;
        case 2:
            printf("You selected 500 MB bundle. Cost: 200 KES\n");
            break;
        case 3:
            printf("You selected 1 GB bundle. Cost: 350 KES\n");
            break;
        case 4:
            printf("You selected 2 GB bundle. Cost: 600 KES\n");
            break;
        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}