/*
Name: Kutayi Janet Ayoti 
Reg: PA106/G/28769/25
des:simple C programe to calculate the volume and surface area of a cylinder
*/

#include <stdio.h>

int main() {
    float radius, height, volume, surfaceArea;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = 3.1416 * radius * radius * height;
    surfaceArea = 2 * 3.1416 * radius * radius * height;

    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface Area of the cylinder: %.2f\n", surfaceArea);

    return 0;
}