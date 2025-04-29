#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Use current time as seed for random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Define the range for the random number
    int lower_bound = 1;
    int upper_bound = 100;

    // Generate a random number
    int random_number = std::rand() % (upper_bound - lower_bound + 1) + lower_bound;

    // Output the random number
    std::cout << "Random Number: " << random_number << std::endl << std::endl;

    std::time_t currentTime = std::time(0);

    std::cout << "Current time: " << std::ctime(&currentTime) << static_cast<unsigned int>(currentTime);

    return 0;
}

// Time returns the number of second from January 1st 1970 to the current time.