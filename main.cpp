#Create with the help of GitHub Copilot 

#include <iostream>
#include <string>

void bookRoom() {
    std::cout << "Booking a room..." << std::endl;
    // Add booking logic here
}

void cancelBooking() {
    std::cout << "Cancelling a booking..." << std::endl;
    // Add cancellation logic here
}

void viewBookings() {
    std::cout << "Viewing all bookings..." << std::endl;
    // Add logic to view bookings here
}

int main() {
    std::string operation;
    std::cout << "Enter operation (book, cancel, view): ";
    std::cin >> operation;

    if (operation == "book") {
        bookRoom();
    } else if (operation == "cancel") {
        cancelBooking();
    } else if (operation == "view") {
        viewBookings();
    } else {
        std::cout << "Invalid operation!" << std::endl;
    }

    return 0;
}
