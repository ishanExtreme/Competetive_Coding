#include <iostream>
#include <cmath>

int main()
{
    int area1, area2, area3;
    std::cin >> area1 >> area2 >> area3;

    // side of three rects=> a, b, c
    // in terms of areas
    double a = std::sqrt((area1 * area3) / area2);
    double b = area1 / a;
    double c = area3 / a;

    double total_edge_length = 4 * (a + b + c);

    std::cout << total_edge_length;

    return 0;
}