//
#include "Shooter.h"
#include <iostream>

Roll* Shooter::throw_dice(Die& die1, Die& die2) {
    Roll* roll = new Roll(die1, die2); // Create a new Roll instance on the heap.
    roll->roll_dice();                // Call roll_dice to calculate the rolled value.
    rolls.push_back(roll);            // Store the roll pointer in the vector.
    return roll;                      // Return the dynamically allocated roll.
}

void Shooter::display_rolled_values() const {
    for (const auto& roll : rolls) {
        std::cout << "Rolled Value: " << roll->roll_value() << std::endl;
    }
}

Shooter::~Shooter() {
    for (auto& roll : rolls) {
        delete roll; // Free memory allocated for each Roll.
    }
    rolls.clear(); // Clear the vector.
}
