//
#include "roll.h"

Roll::Roll(Die& d1, Die& d2) : die1(d1), die2(d2) {}

void Roll::roll_dice() {
    rolled_value = die1.roll() + die2.roll(); // Roll both dice and calculate sum
}

int Roll::roll_value() const {
    return rolled_value; // Return the rolled value
}
