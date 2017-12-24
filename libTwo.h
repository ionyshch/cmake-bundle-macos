#include <string>
#include <iostream>
#include "libThree.h"

void printFromLibTwo(const std::string& message)
{
    std::cout << "Entering printFromLibTwo()" << std::endl;
    printFromLibThree(message);
    std::cout << "Exiting printFromLibTwo()" << std::endl;
}
