#include <iostream>
#include <vector>

int main()
{
    int n, m;
    std::cin>>n>>m;

    std::vector<int> childrens_index;
    int childrens[n];
    for(int i=0; i<n; i++)
    {
        std::cin>>childrens[i];
        childrens_index.push_back(i);
    }

    // int x = 0;

    while(!childrens_index.empty())
    {
        if(childrens_index.size() == 1)
        {
            std::cout<<(childrens_index[0]+1);
            break;
        }
        int remain = childrens[childrens_index[0]] - m;
        if(remain<=0)
        {
            childrens_index.erase(childrens_index.begin());
            // std::cout<<childrens_index[0]<<"\n";
        }
        else
        {
            childrens[childrens_index[0]] = remain;
            int temp = childrens_index[0];
            childrens_index.erase(childrens_index.begin());
            childrens_index.push_back(temp);

        }

        // for(auto ir = childrens_index.begin(); ir != childrens_index.end(); ++ir)
        //     std::cout<<*ir<<",";
        // std::cout<<"\n";
        
    }

    return 0;
}