#include <iostream>

int main()
{
    int pages;
    std::cin >> pages;
    int week_read[7];
    for (int i = 0; i < 7; i++)
    {
        std::cin >> week_read[i];
    }

    int read_sum[7];

    read_sum[0] = week_read[0];
    for (int i = 1; i < 7; i++)
    {
        read_sum[i] = week_read[i] + read_sum[i - 1];
    }

    if (pages < read_sum[6])
    {
        for (int i = 0; i < 7; i++)
        {
            if (read_sum[i] > pages)
            {
                std::cout << i + 1;
                break;
            }
        }
    }

    if (pages > read_sum[6])
    {
        int remainder = pages % read_sum[6];
        if (remainder == 0)
        {
            int out = 0;
            for (int i = 1; i < 7; i++)
            {
                if (week_read[i] != 0)
                    out = i;
            }
            std::cout << out + 1;
        }
        else
        {
            for (int i = 0; i < 7; i++)
            {
                if (read_sum[i] > remainder)
                {
                    std::cout << i + 1;
                    break;
                }
            }
        }
    }

    return 1;
}