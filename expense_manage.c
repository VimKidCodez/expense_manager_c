// need to write an expense manager in c containing the follows contents
// Income:
// Food expnese:
// Travel Expense:
// Cloth expense:
// Power expense:
// Water Expense:
// Others

#include <stdio.h>


int main(){
	int income, food , travel, cloth,power, water , others , total;
	printf("welcome to expense calculator\n");
	printf("Enter income: ");
	scanf("%d",&income); // take input
	printf("\n");

	printf("Enter food expense: ");
        scanf("%d",&food);
        printf("\n"); //  leaves a line to look good
	
	printf("Enter travel expense: ");
        scanf("%d",&travel); // take input
        printf("\n"); 

	printf("Enter cloth expense: ");
        scanf("%d",&cloth);// take input
        printf("\n");

	printf("Enter power expense: ");
        scanf("%d",&power);// take input
        printf("\n");

	printf("Enter water expense: ");
        scanf("%d",&water);// take input
        printf("\n");
	
	printf("Enter other expense: ");
        scanf("%d",&others);// take input
        printf("\n"); 
	
	total = food+travel+cloth+power+water+others; // add all of them
	int total_after_sub = income-total; // sub it
	printf("The remaining money is :%d",total_after_sub); // print it

	
}

