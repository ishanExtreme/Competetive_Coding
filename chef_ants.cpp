#include <iostream>

int main()
{
    int T;
    std::cin>>T;
    long int output[T];
    for(int i=0; i<T; i++)
    {

        int N;
        std::cin>>N;

        int pos;
        int neg;

        for(int j=0; j<N; j++)
        {
            pos = 0;
            neg = 0;
            int M;
            std::cin>>M;
            for(int k=0; k<M; k++)
            {
                int temp;
                std::cin>>temp;
                if(temp<0)
                    neg++;
                else
                    pos++;
            }
        }
        output[i] = pos*neg;
        
    }

    for(int i=0 ;i<T; i++)
        std::cout<<output[i]<<"\n";
    return 0;
}