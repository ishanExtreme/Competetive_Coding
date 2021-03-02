#include <iostream>
#include <string>

int main()
{
    char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'
    ,'m', 'n' ,'o' , 'p'};

    int T;
    std::cin>>T;

    std::string decoded = "";
    for(int i=0; i<T; i++)
    {
        int size;
        std::cin>>size;
        std::string encoded;
        std::cin>>encoded;
        

        for(int i=0; i<size; i=i+4)
        {
        int conv = std::stoi(encoded.substr(i, 4), 0, 2);
        decoded = decoded + alpha[conv];
        }

        decoded = decoded+"\n";

        
    }

    std::cout<<decoded;

    return 0;
}