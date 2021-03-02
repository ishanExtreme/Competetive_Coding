#include <iostream>
#include <algorithm>
bool isPossible(int A[], int N, int K, int sum, int end)
{
    int n = end+1;
    bool subset[n + 1][K + 2];
    bool result = false;

    int set[n];
    for(int l=0; l<n; l++)
        set[l] = A[l];

    // for(int l=0; l<n; l++)
    //     std::cout<<set[l];
    // std::cout<<"\n\n";
    // working correctly
    // std::cout<<"Sum:"<<sum<<"\n";
    for (int i = 0; i <= n; i++)
        subset[i][0] = true;
 
    for (int i = 1; i <= K+1; i++)
        subset[0][i] = false;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= K; j++) {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j] = subset[i - 1][j]
                               || subset[i - 1][j - set[i - 1]];
            if((j>(K-set[i-1])) && (subset[i-1][j]==true))
            {
                if((sum-(j+set[i-1]) >= K))
                {
                    // std::cout<<"in";
                    subset[i][K+1] = true;
                }

            }
            else if(set[i-1] > K)
            {   
                // std::cout<<"in2";
                if(sum-set[i-1] >= K)
                    subset[i][K+1] = true;
            }
            else if(subset[i-1][K+1] == true)
            {
                // std::cout<<"in3";
                subset[i][K+1] = true;
            }
        }
    }

    // for(int i=0; i<=n; i++)
    // {
    //     for(int j=0; j<=K+1; j++)
    //         std::cout<<subset[i][j]<<" ";
    //     std::cout<<"\n";
    // }
    // std::cout<<"\n\n";

    if(sum == (2*K))
    {
        if(subset[n][K] == true)
            result = true;
    }

    if(sum > (2*K))
    {
        if(subset[n][K] == true)
            result = true;
        else if(subset[n][K+1] == true)
            result = true; 
        else
        {
            result = false;
        }
           
    }
 
    return result;
}
 
int main()
{
    int T;
    std::cin>>T;
    int output[T];
    for(int i=0; i<T; i++)
    {
        int N, K;
        std::cin>>N>>K;
        int A[N];
        for(int j=0; j<N; j++)
            std::cin>>A[j];
        
        std::sort(A, A + N, std::greater<int>());
        // working correctly

        int summ = 0;
        bool result = false;
        int j;
        for(j=0; j<N; j++)
        {
            summ = summ + A[j];
            if(summ >= 2*K)
                result = isPossible(A, N, K, summ, j);
            if(result == true)
                break;
        }
        if(result == false)
            output[i] = -1;
        else
            output[i] = j+1;
        

    }

    for(int i=0; i<T; i++)
        std::cout<<output[i]<<"\n";

    return 0;
}

