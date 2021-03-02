
#include <iostream>
#include <vector>
void change(std::vector<int> &arr)
{
    arr[0] = 10;
}

int main()
{
    std::vector<int> a = {2,3,4};

    change(a);

    for(int i=0; i<3; i++)
    {
        std::cout<<a[i]<<",";
    }
}
