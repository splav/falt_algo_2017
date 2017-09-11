// Никита Теслюк 764 группа
// Сумма дробей (1.3)

#include "iostream"

int main() {

    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    int numerator = a * d + c * b, denominator = b * d, p = 2, n = numerator;
    while (n > 1) {
        if (n % p == 0) {
            n /= p;
            if (denominator % p == 0) {
                numerator /= p;
                denominator /= p;
            }
        } else {
            p += 1 + p % 2;
        }
    }

    std::cout << numerator << " " << denominator;
    return 0;
}
