#include <iostream>
#include <string>

int main()
{
    std::string seq;
    std::cin>>seq;
    
    std::string decoded="";

    for(int i=0; i<seq.length(); i++)
    {
        if(seq[i] == '.')
            decoded = decoded+'0';
        else
        {
            if(seq[i+1] == '.')
                decoded = decoded + '1';
            else
                decoded = decoded + '2';

            i++;
        }
        

    }

    std::cout<<decoded;

    return 0;
}