/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include "Morty.hpp"

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 

void c137::Morty(int a, int b, int s) {
    int i;

    for (i = a; i <= b; i = i + s) {

        std::cout << i << ": ";

        if (i % 15 == 0) {
            std::cout << "Aww Geez Man";
        }

        else if (i % 3 == 0) {
            std::cout << "Aww";
        }

        else if (i % 5 == 0) {
            std::cout << "Geez";
        }


        std::cout << "\n";
    }
}

void c137::Morty(int a, int b) {

    c137::Morty(a, b, 1);
}

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 

void z286::Morty(int a, int b, int s) {
    int i;

    for (i = a; i <= b; i = i + s) {

        std::cout << i << ": ";

        if (i % 15 == 0) {
            std::cout << "naM zeeG wwA";
        }

        else if (i % 3 == 0) {
            std::cout << "wwA";
        }

        else if (i % 5 == 0) {
            std::cout << "zeeG";
        }

        std::cout << "\n";
    }
}

void z286::Morty(int a, int b) {
    z286::Morty(a, b, 1);
}