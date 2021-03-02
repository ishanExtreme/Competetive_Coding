#include <iostream>
// the main function
int main()
{
    int forces;
    std::cin>>forces;
    int total_x = 0;
    int total_y = 0;
    int total_z = 0;

    for(int i=0; i<forces; i++)
    {   
        int f_x,f_y,f_z;
        std::cin>>f_x>>f_y>>f_z;
        total_x = total_x + f_x;
        total_y = total_y + f_y;
        total_z = total_z + f_z;         
    }

    if(total_x==0 && total_y==0 && total_z==0)
    {
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }
    


    return 0;
}