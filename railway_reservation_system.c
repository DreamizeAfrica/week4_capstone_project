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
		printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %.f RWF\n\n", trains[i].trainNumber, trains[i].destination, trains[i].availableSeats, trains[i].ticketPrice);
	}
}

void bookTickets(struct Train trains[], int availableTrains){
	int trainNumber, seatsToBook;
	printf("\nEnter the train number: ");
	scanf("%d", &trainNumber);
	
	printf("\nEnter the seats to book: ");
	scanf("%d", &seatsToBook);
	
	
	int found=0;
	for (int i=0; i<availableTrains; i++){
		if(trains[i].trainNumber==trainNumber){
			found=1;
			if(trains[i].availableSeats>=seatsToBook){
				trains[i].availableSeats-=seatsToBook;
				printf("%d tickets booked successfully on Train No: %d.\n", seatsToBook, trainNumber);
				printf("Remaning seats: %d\n\n",trains[i].availableSeats);				
			}else{
				printf("Not enough seats available on Train No: %d.\n", trainNumber);
			}
			break;
		}
	}
	if(!found){
		printf("Train No: %d not found.\n", trainNumber);
	}
	
}

// dy 44

void cancelTickets(struct Train trains[], int availableTrains){
	int trainNumber, seatsToCancel;
	
	printf("\nEnter the train number: ");
	scanf("%d", &trainNumber);
	
	printf("Enter number of seats to cancel: ");
	scanf("%d", &seatsToCancel);
	
	int found=0;
	for(int i=0; i<availableTrains; i++){
		if (trains[i].trainNumber==trainNumber){
			found=1;
			trains[i].availableSeats+=seatsToCancel;
			printf("%d tickets canceled successfully on Train No: %d.\n", seatsToCancel, trainNumber);
            printf("Remaining seats: %d\n\n", trains[i].availableSeats);
            break;
		}
	}
	if(!found){
		printf("Train No: %d not found.\n", trainNumber);
	}
}


//day 5
void searchTrains(struct Train trains[], int availableTrains){
	char destination[50];
	printf("\nEnter the destination to search: ");
	scanf("%s", &destination);
	
	int found=0;
	printf("\nSearch results:\n");
	for (int i=0; i<availableTrains; i++){
		if(strcmp(trains[i].destination, destination)==0){
			found=1;
			printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %.f RWF\n",
                   trains[i].trainNumber, trains[i].destination, trains[i].availableSeats, trains[i].ticketPrice);
		}
	}
	if(!found){
		printf("No trains found for destination: %s\n", destination);
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
	
	int choice;
	printf("Choose an option: \n\n");
	printf("1. View available trains\n");
	printf("2. Book tickets\n");
	printf("3. Cancel tickets\n");
	printf("4. Search by destination\n");
	printf("5. Exit");
	for (int i=0; i<5; i++){
	printf("\n\nEnter your choice: ");
	scanf("%d", &choice);
	
	switch (choice){
		case 1:
			viewAvailableTrains(trains, 5);
			break;
		case 2:
			bookTickets(trains, 5); // day 3
			break;
		case 3:
			cancelTickets(trains, 5); // day 4
			break;
		case 4:
			searchTrains(trains, 5); // day5
			break;
		case 5:
			printf("Exiting the program.\n");
		    return 0;
		default:
			printf("\nInvalid user choice, Exit!");
			i--; 
	}
	
	}

}