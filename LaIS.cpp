#include <iostream>
#include <vector>

std::vector<int>::iterator get_nearest(std::vector<int> arr, std::vector<int>::iterator index1, std::vector<int>::iterator index2, int len)
{
    for(auto i= index2+1; i!=arr.end(); i++)
    {
        if(*i>=*index1)
            return index1;
        else if (*i>=*index2)
        {
           return index2;
        }
        
    }

    return arr.end();

    

}

int find_long_alm(std::vector<int> arr, int len)
{
    
    for(auto i=arr.begin()+1 ;i!=arr.end();)
    {
        if(*(i-1) > *i)
        {
            if((i+1)!=arr.end() && *i > *(i+1))
            {
                auto keep = get_nearest(arr, i, (i+1), len);

                if(keep == i)
                {
                    arr.erase(i+1);
                    
                }
                else if(keep == (i+1))
                {
                    arr.erase(i);
                
                }
               
                

            }
            else
            {
                i++;
            }
            
            
            
        }
        else
        {
            i++;
        }
        
        
        
    }

    return arr.size();
}

int main()
{
    int test_cases;
    std::cin>>test_cases;
    std::vector<int> ans;

    for(int i=0; i<test_cases; i++)
    {
        int nums;
        std::cin>>nums;

        std::vector<int> arr;
        // int arr_ind[nums] = {0};
        for(int j=0; j<nums; j++)
        {   
            int input;
            std::cin>>input;
            arr.push_back(input);
        }

        int ans_sing = find_long_alm(arr, nums);

        ans.push_back(ans_sing);
    }

    for(auto i = ans.begin(); i!=ans.end(); i++)
    {
        if(i+1!=ans.end())
            std::cout<<*i<<"\n";
        else
            std::cout<<*i;
    }

    return 0;
}