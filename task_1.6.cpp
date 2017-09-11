// Никита Теслюк 764 группа
// Обратный порядок (1.6)

#include <iostream>
#include <stdio.h>

int main() {

    int array[10000], size;
    std::cin >> size;

    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    for (int j = 0; j < size / 2 + size % 2; ++j) {
        std::swap(array[j], array[size - j - 1]);
    }

    for (int k = 0; k < size; ++k) {
        std::cout << array[k] << " ";
    }

    return 0;
}
