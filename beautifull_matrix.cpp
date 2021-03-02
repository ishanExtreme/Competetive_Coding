#include <iostream>

int main()
{

int num1 = -1; int num2=-1;
for(int i=1; i<=5; i++)
{
    for(int j=1; j<=5; j++)
    {
        int temp;
        std::cin>>temp;
        if(temp==1)
        {
            num1 = i;
            num2 = j;
            
        }
        
    }

}

int steps = 0;
while(true)
{
    if(num1==3 && num2==3)
    {
        break;
    }
    if(num1 != 3)
    {
        if(num1>3)
            num1--;
        else
            num1++;    
        steps++;
        continue;
    }
    if(num2 != 3)
    {
        if(num2 > 3)
            num2--;
        else
            num2++;
        steps++;
        continue;
    }
}

std::cout<<steps;
return 0;
}