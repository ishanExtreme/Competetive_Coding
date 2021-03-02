#include<iostream>

bool is_diff(int year)
{
    int arr[10] = {0};
    bool res = true;
    while(year!=0)
    {
        int rem = year%10;
        if(arr[rem]==0)
            arr[rem] = 1;
        else
        {
            res = false;
            break;
        }
        year = year/10;
    }

    return res;

}

int main()
{
    int year;
    std::cin>>year;
    
    year++;

    while(true){

    bool stop = is_diff(year);

    if(stop){
        break;
    }
    year++;

    }

    std::cout<<year;


    return 0;
}