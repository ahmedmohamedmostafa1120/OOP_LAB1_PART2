#include "../include/lib.hpp"
#include <cstdio>

 namespace liba{

int magicValue(int n, int i, int j) {
    return n * ((i + j + n / 2 + 1) % n)
         + ((i + 2 * j + 1) % n) + 1;
}

void goTo(int x, int y) {
    printf("\033[%d;%dH", x, y);
    fflush(stdout); 
}

void clear() {
    std::printf("\x1b[2J\x1b[H");
    std::fflush(stdout);
}



  
};