#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int avl[30];
int num;
char seat;
time_t t1;


int main() {
    int ticketNum;
    float fare, totalFare;
    char boardingPoint[50], destination[50], name[50];
    int departureDay, departureMonth, departureYear, departureHour, departureMinute, x;

    // Get user input
    printf("Enter the number of passenger: ");
    scanf("%d", &x);
    printf("Enter Passenger name: ");
    scanf("%s", name );
    printf("Enter boarding point: ");
    scanf(" %s", boardingPoint);
    printf("Enter destination: ");
    scanf("%s", destination);
    
    srand((unsigned)time(&t1));
    
    printf("Avalable Seet: ");
    for (int i = 1; i<=15; i++){
        num = rand()%30+1;
        printf("%d, ",num);
    }
    printf("\n");
    printf("Enter seat number seat: ");
    scanf("%s", &seat);
    
    
    printf("Enter fare: ");
    scanf("%f", &fare);
    printf("Enter date of departure (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &departureDay, &departureMonth, &departureYear);
    printf("Enter time of departure (hh:mm__24-hours format): ");
    scanf("%d:%d", &departureHour, &departureMinute);

    // Generate ticket number
    ticketNum = rand();

    //Calculating Total Fare
    totalFare = fare * x; // Adding 10% service tax

    // Print ticket
    printf("\n");
    printf("----------------------------\n");
    printf("    E-Ticket for Bus\n");
    printf("----------------------------\n");
    printf("Ticket Number: %d\n", ticketNum);
    printf("Number of Passenger : %d\n",x);
    printf("Name: %s\n", name);
    printf("Boarding Point: %s\n", boardingPoint);
    printf("Destination: %s\n", destination);
    printf("Seat number : %s\n",&seat);
    printf("Fare: Rs. %.2f\n", fare);
    //printf("Service Tax: Rs. %.2f\n", fare * );
    printf("Total Fare: Rs. %.2f\n", totalFare);
    printf("Date of Departure: %02d/%02d/%d\n", departureDay, departureMonth, departureYear);
    printf("Time of Departure: %02d:%02d\n", departureHour, departureMinute);
    printf("----------------------------\n");
     printf("-------------------Thank You For Choosing Our Services-----------\n");

    return 0;
}
