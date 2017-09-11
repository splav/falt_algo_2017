// Никита Теслюк 764 группа
// Квадраты (1.5)

#include <iostream>

int main() {

    int N, i = 1, s = 1;

    std::cin >> N;

    for (int j = 0; j < N; ++j) {
        std::cout << s << std::endl;
        i += 2;
        s += i;
    }

    return 0;
}
