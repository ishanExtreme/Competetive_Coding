#include <iostream>
#include <string>

int main()
{
    int n,t;
    std::cin>>n>>t;
    std::string seq;
    std::cin>>seq;
    

    for(int i = 1; i<=t; i++)
    {   
        std::string new_seq = seq;
        for(int j=0; j<seq.length()-1; j++)
        {
            if(seq[j] == 'B' && seq[j+1] == 'G')
            {
                new_seq[j] = 'G';
                new_seq[j+1] = 'B';
            }
        }
        seq = new_seq;
    }

    std::cout<<seq;

    return 0;
}