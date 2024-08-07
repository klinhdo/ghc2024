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

void checkInGuest(const std::string& guestInfo) {
    std::cout << "Checking in guest: " << guestInfo << std::endl;
    // Add logic to check-in the guest here

    // Update the room status as reserved
    // You can modify the logic based on how the room status is stored
    std::string roomName = extractRoomName(guestInfo); // Assuming there is a function to extract the room name from guest information
    updateRoomStatus(roomName, "reserved"); // Assuming there is a function to update the room status
}

void checkOutGuest(const std::string& guestInfo) {
    std::cout << "Checking out guest: " << guestInfo << std::endl;
    // Add logic to check-out the guest here

    // Update the room status as available
    // You can modify the logic based on how the room status is stored
    std::string roomName = extractRoomName(guestInfo); // Assuming there is a function to extract the room name from guest information
    updateRoomStatus(roomName, "available"); // Assuming there is a function to update the room status
}

void printUsage() {
    std::cout << "Usage:" << std::endl;
    std::cout << ">> book <roomName> <guestName>" << std::endl;
    std::cout << ">> cancel <roomName> <guestName>" << std::endl;
    std::cout << ">> view" << std::endl;
    std::cout << ">> listAvailableRooms" << std::endl;
}

std::string getGuestInfo(const std::string& roomName) {
    // Add logic to get guest information based on the room number
    // Return the guest information as a string
    return "Guest information for room " + roomName
}
/**
 * @brief The main function of the program.=
 * 
 * This function is the entry point of the program. It displays a welcome message and performs various operations based on the command line arguments provided.
 * 
 * @param argc The number of command line arguments.
 * @param argv An array of strings containing the command line arguments.
 * @return int The exit status of the program.
 */
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
    } else if (operation == "getGuestInfo") {
        if (argc != 3) {
            std::cerr << "Usage: " << argv[0] << " getGuestInfo <roomName>" << std::endl;
            return 1;
        }
        std::string roomName = argv[2];
        std::string guestInfo = getGuestInfo(roomName);
        std::cout << guestInfo << std::endl;
    } else {
        std::cerr << "Invalid operation!" << std::endl;
        return 1;
    }
    return 0;
}
