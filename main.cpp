// Copyright (c) 2017 Ivan Onyshchenko

#include "libOne.h"
#include "libTwo.h"
#include <iostream>

// main() uses LibOne and LibTwo, LibTwo internally uses LibThree
int main()
{
    std::cout << "Entering main()" << std::endl;
    printFromLibOne("foo");
    printFromLibTwo("bar");
    std::cout << "Exiting main()" << std::endl;

    return 0;
}
