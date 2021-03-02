#include <iostream>
#include <algorithm>

// strcuture for coordinates
struct Coordinates
{
    int x, y;
};

// sort assending order according to x coord
bool compareX(Coordinates c1, Coordinates c2)
{
    return (c1.x < c2.x);
}

// sort assending order according to y coord
bool compareY(Coordinates c1, Coordinates c2)
{

    return (c1.y < c2.y);
}

int main()
{
    int n;
    std::cin >> n;

    // array of coordinates
    struct Coordinates coord[n];
    for (int i = 0; i < n; i++)
    {
        // entering coordinates
        std::cin >> coord[i].x >> coord[i].y;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool left_x = false;
        bool right_x = false;
        bool left_y = false;
        bool right_y = false;
        for (int j = 0; j < n; j++)
        {
            if (coord[i].x > coord[j].x && coord[i].y == coord[j].y)
                right_x = true;
            if (coord[i].y > coord[j].y && coord[i].x == coord[j].x)
                right_y = true;
            if (coord[i].x < coord[j].x && coord[i].y == coord[j].y)
                left_x = true;
            if (coord[i].y < coord[j].y && coord[i].x == coord[j].x)
                left_y = true;
        }
        if (right_x && right_y && left_x && left_y)
            count++;
    }

    std::cout << count;

    return 1;
}