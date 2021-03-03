// Logical Question!!
#include <iostream>

int main()
{
    long long int n, k;
    std::cin >> n >> k;

    // for 1st(odd) sequence
    if (k <= ((n / 2) + (n % 2)))
    {
        // AP, a+(n-1)*d
        long long int out = 1 + (k - 1) * 2;
        std::cout << out;
    }
    else
    {
        long long int pos = k - ((n / 2) + (n % 2));
        long long int out = 2 + (pos - 1) * 2;
        std::cout << out;
    }
    return 0;
}