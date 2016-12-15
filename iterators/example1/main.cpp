#include <iostream>
#include <vector>
using namespace std;

 void PrintArray(std::vector<int> foo)
 {
     for(auto &value : foo)
     {std::cout<<value<<std::endl;}
 }
int main(int argc, char *argv[])
{

    std::vector<int> foo ={1,2,3,4,5,6,7};
    PrintArray(foo);

    for (auto current = foo.end()-1; current != foo.begin()-1;--current)
    {
        if((*current)%2 != 0)
        {
          current = foo.erase(current);
        }
    }

    std::cout<<std::endl;
    PrintArray(foo);
    return 0;
}
