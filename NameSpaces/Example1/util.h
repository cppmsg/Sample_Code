#pragma once
#include <string>
namespace myLib2
{
    int platformCode(){return 1;}
    int foo (float i){std::cout<<"foo float"<<std::endl; return 0;}

    template <typename T>
    int foo(T){std::cout<<"foo template"<<std::endl;return 0;}
    template<> int foo<std::string>(std::string str){ std::cout<<"foo string template"<<std::endl; return 0;}
}
namespace myLib
{
#ifdef deprecated2
inline
#endif
    namespace deprecated2
    {
        int foo(int t){std::cout<<"foo int"<<std::endl; return 0;}
      //  int foo(const std::string &s) { std::cout<<"foo string"<<std::endl; return 0;}
    }

#ifdef deprecated6
inline
#endif
    namespace deprecated6
    {
        int platformCode(){return 1;}
        int foo (double i){std::cout<<"foo double"<<std::endl; return 0;}
        int foo(const char * c ) { std::cout<<"foo char"<<std::endl; return 0;}


    }


}

