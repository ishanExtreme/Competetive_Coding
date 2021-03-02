#include <iostream>
#include <string>

int main()
{
    int T;
    std::cin>>T;
    int output[T][2];

    for(int i=0; i<T; i++)
    {
        int N, K, x, y;
        std::cin>>N>>K>>x>>y;
        if(x == y)
        {
            x = N;
            y = N;
        }
        else if(y>x)
        {
            x = x + (N-y);
            y = N;
            if(K%4 == 2)
            {   
                int t = x;
                x = y;
                y = t;
            }
            else if(K%4 == 3)
            {

                x = y - x;
                y = 0;

            }
            else if(K%4 == 0)
            {
                y = y - x;
                x = 0;

            }
        }
        else
        {
            y = y + (N-x);
            x = N;
            if(K%4 == 2)
            {
                int t = x;
                x = y;
                y = t;
            }
            else if(K%4 == 3)
            {

                y = x - y;
                x = 0;
            }
            else if(K%4 == 0)
            {
                x = x - y;
                y = 0;

            }
        }

        output[i][0] = x;
        output[i][1] = y;  
        
    }

    for(int i=0; i<T; i++)
    {
            std::cout<<output[i][0]<<" "<<output[i][1]<<"\n";
    }

    return 0;
}