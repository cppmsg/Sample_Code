#include <iostream>
#include <memory>

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

 bool modernFooWithBool(std::shared_ptr<char> & myvar)
{
    try{
         myvar = make_shared<char>('b');
     }
     catch( ...)
     {
         return false;
     }
     return true;
}

 bool modernUniqueFooWithBool(std::unique_ptr<char> & myvar)
{
    try{
         myvar = make_unique<char>('c');
     }
     catch( ...)
     {
         return false;
     }
     return true;
}

 bool modernUniqueMultiFooWithBool(std::unique_ptr<char> & myvar,std::unique_ptr<char> & myvar2)
{
    try{
         myvar = make_unique<char>('d');
         myvar2 = make_unique<char>('e');
     }
     catch( ...)
     {
         return false;
     }
     return true;
}


int main(int argc, char *argv[])
{
    char  * t = nullptr;
    foo(&t);

    std::shared_ptr<char> sharemT ;
    modernFooWithBool(sharemT);


    std::unique_ptr<char> uP;
    modernUniqueFooWithBool(uP);
    auto mT = modernFoo();


    std::unique_ptr<char> uP1;
    std::unique_ptr<char> uP2;

    modernUniqueMultiFooWithBool(uP1,uP2);

    cout << "value of pointers: " <<*mT<<" "<< *sharemT<<" "<<*uP<<" "<<*uP1<<" "<<*uP2<<endl;

    delete t;
    return 0;
}
