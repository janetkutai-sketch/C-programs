/*
NAME:Kutayi Janet Ayoti
REG NO:PA106/G/28769/25
DESCRIPTION:while loop program to prompt the user to enter their bank balance
*/
#include <stdio.h>

int main(){
	
	// start
	int balance = 1000;
	int amount;

	
	//stop
	while(balance>0)
	{
		printf("Your balance is %d\n",balance);
		
		printf("Enter amount to withdraw :");
		scanf("%d",&amount);
		 
		 //step ;balance = balance-amount
		balance-=amount;
	}
		
		printf("insufficient balance");
		
	
	
	return 0;
	
}