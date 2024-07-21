#include <stdio.h>

char seats[5][5];
char filled = '*';

void book() {
        int row, col;
    printf("Which column you selecting: ");
    scanf("%d",&col);
    printf("Which row you selecting: ");
    scanf("%d",&row);
    if(seats[row][col] == filled) {
        printf("Sorry, this seat is already booked.\n");
    } else {
        seats[row][col] = filled;
        printf("\nYou succesfuly booked your seats");
    }

}

void display() { 
    printf("| %c | %c | %c | %c | %c |\n",    seats[1][1],seats[1][2],seats[1][3],seats[1][4],seats[1][5]);
    printf("| %c | %c | %c | %c | %c |\n",    seats[2][1],seats[2][2],seats[2][3],seats[2][4],seats[2][5]);
    printf("| %c | %c | %c | %c | %c |\n",    seats[3][1],seats[3][2],seats[3][3],seats[3][4],seats[3][5]);
    printf("| %c | %c | %c | %c | %c |\n",    seats[4][1],seats[4][2],seats[4][3],seats[4][4],seats[4][5]);
    printf("| %c | %c | %c | %c | %c |\n",    seats[5][1],seats[5][2],seats[5][3],seats[5][4],seats[5][5]);
} 

void cancelTickets() {
    int row, col;
    printf("Which column you were selected: ");
    scanf("%d",&col);
    printf("Which row you were selected: ");
    scanf("%d",&row);
    if(seats[row][col] == filled){
    seats[row][col] = ' ';
    printf("\nYour seat succesfully unbooked\n");
    }


}


int main() {
    int choice1,choice2;
    do{
    printf("Welcome to the ticket booking portal\n");
    printf("1. Book ticket\n");
    printf("2. Display seats\n");
    printf("3. cancel Tickets\n");
    printf("4. Exit\n");
    printf("Function: ");
    scanf("%d",&choice1);
    switch(choice1) {
        case 1:
            book();
            break;
        case 2:
            display();
            break;
        case 3:
            cancelTickets();
             break;
        case 4:
            break;
        default:
            printf("\nInvalid function");
        
    }
    printf("Do you want to continue(1/0): ");
    scanf("%d",&choice2);
    }while(choice2 == 1);
}