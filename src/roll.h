//
#ifndef ROLL_H
#define ROLL_H

#include "die.h"

class Roll {
public:
    Roll(Die& d1, Die& d2); // Constructor with two Die references
    void roll_dice();       // Rolls both dice
    int roll_value() const; // Returns the rolled value

private:
    Die& die1;             // Reference to the first die
    Die& die2;             // Reference to the second die
    int rolled_value{0};   // Sum of both dice rolls
};

#endif // ROLL_H
