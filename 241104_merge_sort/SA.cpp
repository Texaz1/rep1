

#include <iostream>
#include <vector>

void show_vec(std::vector <int> Vec, const int vec_size) {
    const char format = ' ';
    for (int i = 1; i <= vec_size; i++) {
        std::cout << Vec[i] << format;
    }
    std::cout << std::endl;
}