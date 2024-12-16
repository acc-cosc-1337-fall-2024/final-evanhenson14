int main() 
{
	
	return 0;
}

#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"
#include <iostream>
#include <cstdlib> // For srand
#include <ctime>   // For time

int main() {
    std::srand(std::time(0));

    // Step 1: Create dice and shooter
    Die die1, die2;
    Shooter shooter;
    Roll* roll = nullptr;
    int rolled_value = 0; 

    ComeOutPhase come_out_phase;

    do {
        roll = shooter.throw_dice(die1, die2);
        rolled_value = roll->roll_value();
        std::cout << "Rolled " << rolled_value << " roll again" << std::endl;
    } while (come_out_phase.get_outcome(roll) == RollOutcome::natural ||
             come_out_phase.get_outcome(roll) == RollOutcome::craps);

    // Step 4: Transition to Point Phase
    std::cout << "Rolled " << rolled_value << " start of point phase" << std::endl;
    std::cout << "Roll until " << rolled_value << " or a 7 is rolled" << std::endl;

    int point = rolled_value; // Store the point value
    PointPhase point_phase(point);

    // Step 5: Point Phase Loop
    do {
        roll = shooter.throw_dice(die1, die2); // Simulate rolling dice
        std::cout << "Rolled " << roll->roll_value() << " roll again" << std::endl;
    } while (point_phase.get_outcome(roll) != RollOutcome::seven_out &&
             point_phase.get_outcome(roll) != RollOutcome::nopoint);

    // Step 6: End of Point Phase
    std::cout << "Rolled " << roll->roll_value() << " end of point phase" << std::endl;

    // Step 7: Display all rolled values
    shooter.display_rolled_values();

    return 0;
}
