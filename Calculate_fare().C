/*
NAME:KUTAYI JANET AYOTI
REG NO:PA106/G/28769/25
DEFINITION:A program (to calculate fare)that takes
           distance traveled (in km)as input and
           and returns total fare

*/

#include<stdio.h>
//function prototype
int calculate_fare(int distance);

int main(){
	int distance;
	
	//function call
	printf("Enter distance traveled(in KM):");
	scanf("%d", &distance);
	
	printf("Total fare is:KSh. %.2f\n",calculate_fare(distance));
	
	return 0;
}
//function declaration
int calculate_fare(int distance){
	int fare;
	fare = distance*10;
	
	return fare;
	
}