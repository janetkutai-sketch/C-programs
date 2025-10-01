//program to check student's eligibility for final exam.

/*
NAME:Kutayi Janet Ayoti
REG:PA106/G/28769/25
*/

#include <stdio.h>

int main(){
	float attendance, average_marks;
	//prompt the user to enter their attendance
	printf("Enter attendance:" );
	scanf("%f, &attendance");
	
	//prompt the user to enter their marks
	printf("Enter average_marks:");
	scanf("%f, &average_marks");
	
	//checking eligibility
	if(attendance>= 75 && average_marks >=40){
		printf("Eligible for the final exam.\n");}
		else {
			printf("Not eligible for the final exam.\n");}
		
	return 0;
}