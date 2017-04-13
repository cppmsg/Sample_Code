#include <iostream>

using namespace std;

void foo(char ** mychar)
{
    *mychar = new char{'a'};

}

std::unique_ptr<char> modernFoo()
{
    //same as  make_unique<char>('a');
    //return std::unique_ptr<char> (new char{'a'});

    return make_unique<char>('a');
}

int main(int argc, char *argv[])
{
    char  * t = nullptr;
    foo(&t);

    auto mT = modernFoo();

    cout << "value of t " <<*mT<< endl;

    delete t;
    return 0;
}
