#include <iostream>
#include "merge_sort.hpp"
#include "SA.hpp"


int main() {
    int* Arr = new int[100];
    std::cout << "Размер массива > ";
    int arr_size;
    std::cin >> arr_size;

    for (int i = 1; i <= arr_size; i++) {
        std::cout << i << " элемент > ";
        std::cin >> Arr[i];
    }

    kea::sortings::merge_sort(Arr, 1, arr_size);

    std::cout << "Упорядоченный массив: ";
    kea::show_array(Arr, arr_size);

    delete[] Arr;
    system("pause>>void");
	return 0;
}