// Create with the help of GitHub Copilot 

#include <iostream>
#include <string>
#include <map>

// Vectors to store list of rooms
std::map<std::string, bool> allRooms = {
    {"LibertyBell", true},
    {"ReadingTerminal", true},
    {"RockyStatue", true},
    {"IndependenceHall", true}
};

// Map to store bookings with room name as key and guest name as value
std::map<std::string, std::string> bookings;

// Function 1
bool bookRoom(const std::string& roomName, const std::string& guestName) {
    std::cout << "Booking room: " << roomName << " for guest: " << guestName << std::endl;
    if (allRooms[roomName])
    {
        bookings[roomName] = guestName;
        allRooms[roomName] = false;
        std::cout << "Room " << roomName << " successfully booked for " << guestName << "." << std::endl;
        return true;
    } else {
        std::cout << "Room " << roomName << " is already booked. Please try with a different room" << std::endl;
        return false;
    }
}

// Function 2
void cancelBooking(const std::string& roomName, const std::string& guestName) {
    std::cout << "Cancelling booking for room: " << roomName << " for guest: " << guestName << std::endl;
}


// Function 3
void listAvailableRooms() {
    std::cout << "This feature is under development" << std::endl;
}

// Function 4
bool magicFunction(const std::string& guestName, const std::string& horoscopeSign) {
    std::map<std::string, std::string> horoscopeToRoom = {
        {"Aries", "LibertyBell"},
        {"Taurus", "ReadingTerminal"},
        {"Gemini", "RockyStatue"},
        {"Cancer", "IndependenceHall"},
        {"Leo", "LibertyBell"},
        {"Virgo", "ReadingTerminal"},
        {"Libra", "RockyStatue"},
        {"Scorpio", "IndependenceHall"},
        {"Sagittarius", "LibertyBell"},
        {"Capricorn", "ReadingTerminal"},
        {"Aquarius", "RockyStatue"},
        {"Pisces", "IndependenceHall"}
    };

    std::string roomName = horoscopeToRoom[horoscopeSign];

    if (allRooms[roomName]) {
        bookings[roomName] = guestName;
        allRooms[roomName] = false;
        std::cout << "Room " << roomName << " successfully booked for " << guestName << " based on horoscope sign " << horoscopeSign << "." << std::endl;
        return true;
    } else {
        std::string currentGuest = bookings[roomName];
        std::cout << "Room " << roomName << " is already booked by " << currentGuest << ". Finding next available room for " << currentGuest << "." << std::endl;

        bool foundNextRoom = false;
        for (auto& room : allRooms) {
            if (room.second) { // If the room is available
                bookings[room.first] = currentGuest;
                allRooms[room.first] = false;
                allRooms[roomName] = true; // Mark the original room as available
                bookings.erase(roomName); // Remove the original booking
                std::cout << "Moved " << currentGuest << " to room " << room.first << "." << std::endl;
                foundNextRoom = true;
                break;
            }
        }

        if (foundNextRoom) {
            bookings[roomName] = guestName;
            allRooms[roomName] = false;
            std::cout << "Room " << roomName << " successfully booked for " << guestName << " based on horoscope sign " << horoscopeSign << "." << std::endl;
            return true;
        } else {
            std::cout << "No available rooms to move " << currentGuest << ". Booking failed for " << guestName << "." << std::endl;
            return false;
        }
    }
}

# Function 5
void printUsage() {
    std::cout << "Usage:" << std::endl;
    std::cout << ">> book <roomName> <guestName>" << std::endl;
    std::cout << ">> cancel <roomName> <guestName>" << std::endl;
    std::cout << ">> view" << std::endl;
    std::cout << ">> listAvailableRooms" << std::endl;
}

// Function 6
std::string getGuestInfo(const std::string& roomName) {
    return bookings[roomName];
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
