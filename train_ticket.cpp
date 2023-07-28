#include <iostream>
#include <string>
using namespace std;

void display_routes() {
    cout << "Available Train Routes:" << endl;
    cout << "1. Route 1 - Fare: $5" << endl;
    cout << "2. Route 2 - Fare: $7" << endl;
    cout << "3. Route 3 - Fare: $6" << endl;
}

void book_ticket() {
    display_routes();
    int route_choice;
    cout << "Enter the route number: ";
    cin >> route_choice;

    if (route_choice < 1 || route_choice > 3) {
        cout << "Invalid route number." << endl;
        return;
    }

    int num_tickets;
    cout << "Enter the number of tickets: ";
    cin >> num_tickets;
    
    int fare = 0;
    if (route_choice == 1) {
        fare = 5;
    } else if (route_choice == 2) {
        fare = 7;
    } else if (route_choice == 3) {
        fare = 6;
    }

    int total_amount = fare * num_tickets;
    cout << "Total amount payable: $" << total_amount << endl;

    string confirm_booking;
    cout << "Do you want to confirm the booking? (yes/no): ";
    cin >> confirm_booking;

    if (confirm_booking == "yes") {
        cout << "Booking confirmed! Enjoy your journey." << endl;
    } else {
        cout << "Booking canceled." << endl;
    }
}

int main() {
    cout << "Welcome to the Local Train Ticketing System!" << endl;
    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Book a Ticket" << endl;
        cout << "2. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            book_ticket();
        } else if (choice == 2) {
            cout << "Thank you for using the Local Train Ticketing System. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
