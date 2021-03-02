#include <iostream>
#include <stack> 

int show_stack(std::stack<int> s)
{
    std::cout<<"\n";
    while (!s.empty())
    {
        std::cout<<s.top()<<',';
        s.pop();
    }
    
    return 0;
}

int main()
{
    std::stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    std::cout<<"Size:"<<s.size();
    std::cout<<"\nTop:"<<s.top();
    show_stack(s);
    std::cout<<"\n";
    show_stack(s);


}