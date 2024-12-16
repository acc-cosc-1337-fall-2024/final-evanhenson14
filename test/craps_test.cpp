#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

#include "die.h"
#include "roll.h"
#include <cassert> // For assert
#include <iostream> 

int main() {
    std::srand(std::time(0)); // Seed random number generator.

    Die die; // Create an instance of the Die class.

    for (int i = 0; i < 10; ++i) {
        int result = die.roll();
        std::cout << "Roll " << i + 1 << ": " << result << std::endl;
        assert(result >= 1 && result <= 6); // Assert the roll is between 1 and 6.
    }

    std::cout << "All tests passed: Die rolls are between 1 and 6." << std::endl;
    return 0;
}




int main() {
    std::srand(std::time(0)); // Seed random number generator.

    Die die1, die2; // Create two dice instances
    Roll roll(die1, die2); // Create a Roll instance with two dice

    for (int i = 0; i < 10; ++i) {
        roll.roll_dice();
        int result = roll.roll_value();
        std::cout << "Roll " << i + 1 << ": " << result << std::endl;
        assert(result >= 2 && result <= 12); // Assert roll value is between 2 and 12
    }

    std::cout << "All tests passed: Roll values are between 2 and 12." << std::endl;
    return 0;
}
