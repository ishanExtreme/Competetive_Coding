#include <iostream>
#include <string>

/*
** Caculates the sum of digits in the number
** param: int n
** return: returns the sum of digits
*/
std::string cal_digits_sum(int n)
{
// copy the value of n
int copy = n;
int sum = 0; 
// extracts the digits
while(copy>0)
{
    sum = sum + copy%10;
    copy = copy/10;
    
}
return std::to_string(sum);
}

int main()
{
    int size;
    std::cin>>size;
    std::string output = "";

    for(int i=0; i<size; i++)
    {
        int number;
        std::cin>>number;
        output = output+cal_digits_sum(number)+"\n";

    }
    std::cout<<output;
    return 0;
}