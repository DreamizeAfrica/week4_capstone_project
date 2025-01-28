#include<stdio.h>
#include<string.h>

struct Train{
	int trainNumber;
	char destination[50];
	int availableSeats;
	float ticketPrice;
};

void viewAvailableTrains( struct Train trains[], int availableTrains){
	printf("\nAvailable Trains: \n\n");
	for (int i=0; i<availableTrains; i++){
		printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %.f RWF\n", trains[i].trainNumber, trains[i].destination, trains[i].availableSeats, trains[i].ticketPrice);
	}
}


int main(){
	//day 2
	
	struct Train trains[5]={
		{101, "Kigali", 30, 5000},
		{102, "Musanze", 25, 4500},
		{103, "Rubavu", 20, 4000},
		{104, "Nyondo", 15, 3500},
		{105, "Huye", 10, 3000}
	};
	// ady 1
	
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
			viewAvailableTrains(trains, 5);
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
	
	return 0;

}