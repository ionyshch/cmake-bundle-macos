#include "libOne.h"
#include "libTwo.h"
#include <iostream>

// main() uses libOne and libTwo, libTwo internally uses libThree
int main()
{
    std::cout << "Entering main()" << std::endl;
    printFromLibOne("foo");
    printFromLibTwo("bar");
    std::cout << "Exiting main()" << std::endl;
}
