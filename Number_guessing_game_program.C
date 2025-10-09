/*
NAME:Kutayi Janet Ayoti
REG NO:PA106/G/28769/25
DESCRIPTION:Number guessing game program
*/

#include <stdio.h>

int main(){
   int guess;
   int secret_number=15; // fixed random number
   
   //Displaying these instructions
   printf("WELCOME TO THE NUMER GUESING GAME\n");
   printf("Choose a random numer between 1 and 20\n");
   
   do{
	   printf("Enter your guess_number:");
	   scanf("%d", &guess);
	   
	   
	   if(guess>secret_number){
		   printf("Too high!\n");
	   }
	   else if(guess<secret_number){
		   printf("Too low!\n");
	   }
	   else{
		   printf("Congratulations!\n");
	   }
   } while(guess!=secret_number);
   	
	return 0;
}

