//
#include "die.h"
#include <cstdlib>
#include <ctime>  )

int Die::roll() {
    return (std::rand() % sides) + 1; 
}
