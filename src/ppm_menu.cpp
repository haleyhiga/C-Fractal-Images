#include "image_menu.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main( ) {

    std::srand(std::time(0)); // from color table
    return imageMenu(std::cin, std::cout);

}