#include <iostream>
#include "utils.h"

int main() {
    int x = 10, y = 5;
    
    std::cout << add(x, y) << std::endl;
    std::cout << subtract(x, y) << std::endl;
    std::cout << multiply(x, y) << std::endl;

    return 0;
}
