#include <iostream>

int main()
{
    int T;
    std::cin>>T;
    int output[T];

    for(int i=0; i<T; i++)
    {
        int N, K, D;
        std::cin>>N>>K>>D;

        int sum = 0;
        for(int j=0; j<N; j++)
        {
            int temp;
            std::cin>>temp;
            sum = sum+temp; 
        }

        int total_sets = sum/K;
        

        if(total_sets>D)
            output[i] = D;
        else
            output[i] = total_sets;
        
        // std::cout<<output[i];


    }

    for(int i=0; i<T; i++)
    {
        std::cout<<output[i]<<"\n";
    }

    return 0;
}