/*
NAME:KUTAYI JANET AYOTI
REG NO:PA106/G/28769/25
DESCRIPTION:A C function (to convert to celcius)that takes
            temperature in fehrenheit as input and returns
            the temperaturein Celcius.
*/

#include<stdio.h>

//function prototype
float convert_to_celcius(int F);

int main(){
	int  F;
	
	//function call
	printf("Enter temperature in Fahrenheit:");
	scanf("%d", &F);
	
	printf("Temperature in Celcius is: %.2f\n",convert_to_celcius(F));
	
	return 0;
}
//function definition
float convert_to_celcius(int F){
	int C;
	
	C = (F-32)*5/9;
	
	return C;
}