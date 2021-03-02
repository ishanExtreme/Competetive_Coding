#include <iostream>
#include <queue>

int main()
{
    std::queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    std::cout<<"Size:"<<que.size();
    std::cout<<"\nFront:"<<que.front();
    std::cout<<"\nBack:"<<que.back();

    que.pop();
    std::cout<<"\nFront:"<<que.front();

    std::cout<<"\n";
    for(auto i=que.front(); i<=que.back(); i++)
    {
        std::cout<<i<<",";
    }


    return 0;
}