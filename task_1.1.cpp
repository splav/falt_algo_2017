// Никита Теслюк 764 группа
// Нули факториала (1.1)

#include <iostream>
#include <algorithm>

int factorial_power(int n, int k) {

    int result = 0;

    while (n) {
        n /= k;
        result += n;
    }

    return result;
}

int main() {

    int N;

    std::cin >> N;

    std::cout << std::min(factorial_power(N, 2), factorial_power(N, 5));

    return 0;
}