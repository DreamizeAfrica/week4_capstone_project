#include<stdio.h>

int main(){
	printf("Choose an option: \n\n");
	printf("1. View available trains\n");
	printf("2. Book tickets\n");
	printf("3. Cancel tickets\n");
	printf("4. Search by destination\n\n");
	
	int choice;
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch (choice){
		case 1:
			printf("View available trains feature coming soon!");
			break;
		case 2:
			printf("Book tickets feature coming soon!");
			break;
		case 3:
			printf("Cancel tickets feature coming soon!");
			break;
		case 4:
			printf("Search by destination feature coming soon!");
			break;
		default:
			printf("\nInvalid user choice, Exit!");
	}
}