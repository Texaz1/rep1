#include "merge_sort.hpp"

void kea::sortings::merge_sort(int* Arr, int first, int last) {
    if (first < last) {
        merge_sort(Arr, first, (first + last) / 2);
        merge_sort(Arr, (first + last) / 2 + 1, last);

        int* mas = new int[100];
        int middle = (first + last) / 2;
        int start = first;
        int final = middle + 1;

        for (int j = first; j <= last; j++)
            if ((start <= middle) && ((final > last) || (Arr[start] < Arr[final]))) {
                mas[j] = Arr[start];
                start++;
            }
            else {
                mas[j] = Arr[final];
                final++;
            }

        for (int j = first; j <= last; j++) {
            Arr[j] = mas[j];
        }

        delete[] mas;
    }
}
