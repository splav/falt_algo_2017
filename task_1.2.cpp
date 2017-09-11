// Никита Теслюк 764 группа
// Разложение на простые (1.2)

#include <iostream>

int main() {

    int N, I;

    std::cin >> N;

    I = 2;

    while (N > 1) {

        while (N % I == 0) {

            std::cout << " " << I;
            N /= I;

        }

        if (I == 2) {
            I++;
        } else {
            I += 2;
        }

    }

    return 0;
}