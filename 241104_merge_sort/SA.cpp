#include "SA.hpp"

#include <iostream>

void kea::show_array(const int* Arr, const int arr_size) {
    const char format = ' ';
    for (int i = 1; i <= arr_size; i++) {
        std::cout << Arr[i] << format;
    }
    std::cout << std::endl;
}