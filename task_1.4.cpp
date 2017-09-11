// Никита Теслюк 764 группа
// Сумма с большим делителем (1.4)

#include <iostream>
#include <cmath>

int main() {

    int N;

    std::cin >> N;

    for(int i = 2; i <= sqrt(N); i++)
    {
        if(N % i==0)
        {
            std::cout << N / i << " " << N - N / i ;
            return 0;
        }
    }
    std::cout << "1 " << N - 1;

    return 0;
}

