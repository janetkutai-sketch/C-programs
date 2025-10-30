/*
NAME:KUTAYI JANET AYOTI
REG NO:PA106/G/28769/25
DESCRIPTION:A C program that uses arrays to create a hotel chain 
            managment system
*/

#include <stdio.h>

int main(){
	//1D Array - weekly Revenue Tracker
	float average,total_revenue,revenue[7]={10000,20000,30000,40000,50000,60000,70000};
	
	printf("WEEKLY REVENUE TRACKER:\n");
	
		//calculate total weekly revenue
	for(int i=0;i<=7;i++){
		printf("Day %d Revenue: %.2f\n",i+1,revenue[i]);
		total_revenue +=revenue[i];
	}
	
	//calculate average
	average = total_revenue/7;
	
	//Display total weekly revenue and average daily revenue
	printf("The total Weekly Revenue:%.2f\n",total_revenue);
	printf("The Average Daily revenue:%.2f\n",average);
	
	//2D Array - Room occupancy (one branch)
	int occupancy[5][10]={          //random occupancy data(for simulate input)
         {0,1,0,0,1,1,0,1,0,1},
	     {1,0,1,1,0,0,1,1,1,0},
	     {1,0,0,1,0,0,0,1,1,0},
	     {0,0,1,1,1,0,1,0,1,0},
	     {1,1,1,0,0,1,1,0,0,1}
     };
	
	// Display the number of occupied and vacant room per floor
    int vacant,room,occupied;	
	
	printf("ROOM OCCUPANCY(ONE BRANCH)\n");
	
	//loop all through eachfloor
	for(int floor=0;floor<5;floor++){
	    occupied=vacant=0;
	    printf("Floor %d:\n",floor+1);
		
	//loop all through each room	
	for(int room=0;room<10;room++){
		printf("%d",occupancy[floor][room]);

	//calculation of occupied rooms in each floor	
	    if(occupancy[floor][room] == 1)
	       occupied++;
		 else
	       vacant++;
	}
	
	//display number of occupied rooms and vacants
	printf("Occupied rooms:%d\n",occupied);
	printf("Vacant rooms:%d\n",vacant);
}

     //3D Array - Multiple Branches
    int chain[3][5][10]={
 {   //1st Branch
    {1,0,1,1,0,0,1,1,0,0},
	{1,1,0,1,0,0,1,0,0,0},
	{1,1,1,1,0,0,0,1,1,1},
	{1,0,0,0,0,1,0,0,0,1},
	{0,1,1,1,0,1,1,1,0,1}
 },
 {   //2nd Branch
    {1,0,1,0,1,1,0,1,0,1},
    {0,0,1,1,0,1,0,1,0,1},
	{1,1,1,1,1,1,1,1,1,1},
	{0,0,0,0,0,0,0,1,1,0},
	{1,1,1,1,1,1,1,0,0,0}
  },
  {    //3rd Branch
    {1,0,1,0,1,0,1,0,1,0},
	{1,0,0,1,1,0,0,0,1,0},
	{0,0,0,0,1,1,1,1,1,1},
	{1,0,0,1,1,0,1,1,0,0},	
	{1,0,1,0,1,0,0,0,0,1}
  }
};
   
   int floor,branch;
   int total_occupied=0;
   
   printf("HOTEL CHAIN ROOM OCCUPANCY(3 BRANCHES)\n");	
   
    //loop all through each branch
    for(branch=0;branch<3;branch++){
       printf("Branch%d:\n",branch+1);
       
    //loop all through each floor
    for(floor=0;floor<5;floor++) {
	   printf("Floor%d:",floor+1);
   
    //loop all through each room
   	for(room=0;room<10;room++) {
   	   printf("%d",chain[branch][floor][room]);
   	   
    //calculation of total rooms occupied across all the three branches 
        if(chain[branch][floor][room]==1)
            total_occupied++;
   }
       printf("\n");
	    
	   }    
        
    //display total number of rooms occupied across all the three branches
	printf("Total number of rooms occupied across all the three branches:%d\n",total_occupied);
   }	
	return 0;

}
