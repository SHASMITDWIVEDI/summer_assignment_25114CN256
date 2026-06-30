#include <stdio.h>

int main() {
    int choice;
    int totalSeats = 50;
    int bookedSeats = 0;
    int numTickets;

    do {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. View Available Seats\n");
        printf("2. Book Tickets\n");
        printf("3. Cancel Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nTotal Seats: %d\n", totalSeats);
                printf("Booked Seats: %d\n", bookedSeats);
                printf("Available Seats: %d\n", totalSeats - bookedSeats);
                break;

            case 2:
                printf("\nEnter number of tickets to book: ");
                scanf("%d", &numTickets);
                if (numTickets <= 0) {
                    printf("Invalid number of tickets!\n");
                } else if (bookedSeats + numTickets > totalSeats) {
                    printf("Not enough seats available! Only %d seats left.\n", totalSeats - bookedSeats);
                } else {
                    bookedSeats = bookedSeats + numTickets;
                    printf("Successfully booked %d tickets.\n", numTickets);
                }
                break;

            case 3:
                printf("\nEnter number of tickets to cancel: ");
                scanf("%d", &numTickets);
                if (numTickets <= 0) {
                    printf("Invalid number of tickets!\n");
                } else if (bookedSeats - numTickets < 0) {
                    printf("Error! You cannot cancel more tickets than currently booked.\n");
                } else {
                    bookedSeats = bookedSeats - numTickets;
                    printf("Successfully cancelled %d tickets.\n", numTickets);
                }
                break;

            case 4:
                printf("Exiting Ticket Booking System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}