/*
NAME:KUTAYI JANET AYOTI
REG NO:PA106/G/28769/25
DESCRIPTION:Programm (to calculate electric bill)that takes
            number of units consumed as input and returns 
            total bill as output.
*/

#include <stdio.h>
//function prototye
float calculate_Electric_Bill(int units);

int main(){
	int units;
	
	//function call
	printf("Enter number of units to be consumed: ");
	scanf("%d", &units);
	
	printf("Total bill is:KSh. %.2f\n",calculate_Electric_Bill(units));
	
	return 0;
	
}
	
//function definition
	float calculate_Electric_Bill(int units){
		float bill;
		
	if (units <= 100){
		bill=units*10.0;
	} else if(units <= 200){
		bill=100*10.0+(units-100)*15.0;
	} else {
		bill=100*10.0+100*15.0+(units-200)*20.0;
	}
	return bill;
}