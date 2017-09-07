#include <iostream>
#include <algorithm>

// Наибольшее x такое, что n! делится на k^x
int fact_pow(int n, int k)
{
	int res = 0;
	while (n) {
		n /= k;
		res += n;
	}
	return res;
}

int main()
{
	int N;   std::cin >> N;

	// 10 = 2*5
	std::cout << std::min( fact_pow(N,2), fact_pow(N,5) );

	return 0;
}
