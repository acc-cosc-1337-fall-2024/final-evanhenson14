//
#ifndef SHOOTER_H
#define SHOOTER_H

#include "roll.h"
#include <vector>

class Shooter {
public:
    Roll* throw_dice(Die& die1, Die& die2); // Create a dynamic Roll, roll dice, and store it.
    void display_rolled_values() const;    // Display all rolled values.
    ~Shooter();                            // Destructor to clean up memory.

private:
    std::vector<Roll*> rolls; // Vector to store pointers to dynamically allocated Roll objects.
};

#endif // SHOOTER_H
