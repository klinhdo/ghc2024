// Create with the help of GitHub Copilot 

#include <iostream>
#include <string>
#include <vector>
#include <map>

void bookRoom(const std::string& roomName, const std::string& guestName) {
    std::cout << "Booking room: " << roomName << " for guest: " << guestName << std::endl;
    // Add logic to book the room here
}

void cancelBooking(const std::string& roomName, const std::string& guestName) {
    std::cout << "Cancelling booking for room: " << roomName << " for guest: " << guestName << std::endl;
    // Add logic to cancel the booking here
}

void viewBookings() {
    std::cout << "Viewing all bookings..." << std::endl;
    // Add logic to view bookings here
}

void listAvailableRooms() {
    std::cout << "This feature is under development" << std::endl;
}

void printUsage() {
    std::cout << "Usage:" << std::endl;
    std::cout << ">> book <roomName> <guestName>" << std::endl;
    std::cout << ">> cancel <roomName> <guestName>" << std::endl;
    std::cout << ">> view" << std::endl;
    std::cout << ">> listAvailableRooms" << std::endl;
}

int main(int argc, char* argv[]) {
    std::cout << "Welcome to the Hotel Grace Hopper!" << std::endl;

    if (argc < 2) {
        printUsage();
        return 1;
    }

    std::string operation = argv[1];

    // Vectors to store list of rooms
    std::vector<std::string> allRooms = {"LibertyBell", "ReadingTerminal", "RockyStatue", "IndependenceHall"};

    // Map to store bookings with room name as key and guest name as value
    std::map<std::string, std::string> bookings;

    if (operation == "book") {
        if (argc != 4) {
            std::cerr << "Usage: " << argv[0] << " book <roomName> <guestName>" << std::endl;
            return 1;
        }
        std::string roomName = argv[2];
        std::string guestName = argv[3];
        bookRoom(roomName, guestName);
    } else if (operation == "cancel") {
        if (argc != 4) {
            std::cerr << "Usage: " << argv[0] << " cancel <roomName> <guestName>" << std::endl;
            return 1;
        }
        std::string roomName = argv[2];
        std::string guestName = argv[3];
        cancelBooking(roomName, guestName);
    } else if (operation == "view") {
        viewBookings();
    } else if (operation == "listAvailableRooms") {
        listAvailableRooms();
    } else {
        std::cerr << "Invalid operation!" << std::endl;
        return 1;
    }

    return 0;
}
