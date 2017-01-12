#include <iostream>
#include <typeinfo>


double globeA = 5;

void foo(){}
void getType()
{
    auto var1 = 0;
    auto var2 = [] () { };
    auto var3 = &foo;
    auto var4 = 3.0;

    std::cout << typeid(var1).name() << " "
         << typeid(var2).name()<< " "
         << typeid(var3).name() <<" "
         << typeid(var4).name() <<std::endl;
}


auto make_kitten(int c) {
    static int a = 0;
    return [=] (int d) {
        static int b = 0;
        return ((a++) + (b++) +c + d );
    };
}

void lambda1()
{

    auto lVar = [&pizza = globeA](int c ) mutable {return ++pizza;};
    std::cout << lVar(9) << " " << globeA <<std::endl;
}

void lambdaCounter()
{
     auto counter = []{auto count = 0; return ++count;};
     std::cout<<counter()<<std::endl;
     std::cout<<counter()<<std::endl;
}

void lambda2 ()
{
   auto k1 = make_kitten(3);
   auto k2 = make_kitten(2);
   auto k1Val = k1(5);
   auto K2Val = k2(7);

}

int main(int argc, char *argv[])
{
    getType();
    lambda2();
    lambda1();
    lambdaCounter() ;
    return 0;
}
