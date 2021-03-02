#include <iostream>
#include <numeric>
#include <vector>  
#include <algorithm>

int arraySum(std::vector<int> a)  
{ 
    return std::accumulate(a.begin(), a.end(), 0); 
}

void swap(std::vector<int> &winner, std::vector<int> &opponent)
{

int opponent_pack_index = std::max_element(opponent.begin(),opponent.end()) - opponent.begin();


int winner_pack_index = std::min_element(winner.begin(),winner.end()) - winner.begin();

int t = winner[winner_pack_index];
winner[winner_pack_index] = opponent[opponent_pack_index];
opponent[opponent_pack_index] = t;

}

// void printArray(std::vector<int> a)
// {
//     for (auto i = a.begin(); i != a.end(); ++i) 
//         std::cout << *i << " "; 
//     std::cout<<"\n";
// }

int main()
{
    int T;
    std::cin>>T;
    int output[T];

    for(int i=0; i<T; i++)
    {
        int N, M;
        std::cin>>N>>M;

        std::vector<int> make_win;
        std::vector<int> opponent;

        for(int i=0; i<N; i++)
        {
            int temp;
            std::cin>>temp;
            make_win.push_back(temp);

        }
        
        for(int i=0; i<M; i++)
        {
            int temp;
            std::cin>>temp;
            opponent.push_back(temp);
        
        }
        
        bool complete = false;
        int count = 0;
        if(arraySum(make_win) > arraySum(opponent))
        {
            complete = true;
        }
        else
        {
            for(int i=0; i<std::min(M,N); i++)
            {    
                swap(make_win, opponent);
                count++;

                if(arraySum(make_win) > arraySum(opponent))
                {
                    complete = true;
                    break;
                }
                
            }
        }

        if(complete == false)
            output[i] = -1;
        else
            output[i] = count;
    }

    for(int i=0; i<T; i++)
        std::cout<<output[i]<<"\n";

    return 0;
}