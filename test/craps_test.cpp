#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

#include "die.h"
#include "roll.h"
#include <cassert> // For assert
#include <iostream> 

#include "Die.h"
#include <cassert>
#include <iostream>

int main() {
    std::srand(std::time(0));
    Die die;

    for (int i = 0; i < 10; ++i) {
        int result = die.roll();
        std::cout << "Roll " << i + 1 << ": " << result << std::endl;
        assert(result >= 1 && result <= 6);
    }

    std::cout << "All Die tests passed!" << std::endl;
    return 0;
}
