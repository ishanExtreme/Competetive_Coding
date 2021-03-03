#include <iostream>
#include <cstdlib>

int main()
{
    int n;
    std::cin >> n;

    int heights[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> heights[i];
    }

    int min = std::abs(heights[0] - heights[1]);
    int ind1 = 0 + 1;
    int ind2 = 1 + 1;
    for (int i = 1; i < n; i++)
    {
        int ht, temp1, temp2;
        if (i == n - 1)
        {
            ht = std::abs(heights[i] - heights[0]);
            temp1 = i + 1;
            temp2 = 0 + 1;
        }
        else
        {
            ht = std::abs(heights[i] - heights[i + 1]);
            temp1 = i + 1;
            temp2 = i + 2;
        }

        if (ht < min)
        {
            min = ht;
            ind1 = temp1;
            ind2 = temp2;
        }
    }

    std::cout << ind1 << " " << ind2;

    return 0;
}