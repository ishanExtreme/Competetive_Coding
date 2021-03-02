#include <iostream>

int main()
{
    int n;
    std::cin>>n;
    int output = 0;
    
    int finger_count = 0;
    for(int i=0; i<n; i++)
    {
        int temp;
        std::cin>>temp;

        finger_count = finger_count+temp;
    }
    for(int i=1; i<=5; i++)
    {
        int new_count = finger_count + i;
        if(new_count%(n+1)!=1)
            output++;
    }

    std::cout<<output;


    return 0;
}