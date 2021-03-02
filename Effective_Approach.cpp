#include <iostream>

int main()
{
    int N;
    std::cin>>N;

    const int size = int(1e5 + 3);
    int pos[size];
    for(int i=0; i<N; i++)
    {
        int n;
        std::cin>>n;
        pos[n] = i+1;

    }

    int Q;
    std::cin>>Q;

    long long int counter_1 = 0;
    long long int counter_2 = 0;
    for(int i=0; i<Q; i++)
    {
        int m;
        std::cin>>m;

        counter_1 = counter_1 + pos[m];
        counter_2 = counter_2 +(N-pos[m]+1);
    }

    

    std::cout<<counter_1<<" "<<counter_2;

    return 0;
}