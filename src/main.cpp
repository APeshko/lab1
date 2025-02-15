#include <iostream>
#include "utils.h"

int main() {
    int x = 10, y = 5;
    
    std::cout << "Сложение: " << add(x, y) << std::endl;
    std::cout << "Вычитание: " << subtract(x, y) << std::endl;

    return 0;
}
