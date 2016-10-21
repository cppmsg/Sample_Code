#include <iostream>
#include <string>
#define ED myLib
#define deprecated2
#define deprecated6
#include "util.h"
using namespace std::string_literals;
using namespace ED;
using namespace myLib2;
int64_t my64 = 99999999999999999;
short short34 = 9;
class baseClass
{
public:
      baseClass(int yy, int mm,int dd){}
      baseClass(){}
};

class Date : public baseClass {
public:
    template <class t>
    Date(std::initializer_list<t> list): baseClass()
    {
        int count= 0;
        for(auto & t : list)
        {
            switch(count)
            {
            case 0:
                y = t;
            break;
            case 1:
                m = t;
            break;
            case 2:
                d = t;
            break;
            }
            count++;
        }
    }

    Date(int yy, int mm,int dd)
        :y{yy>12?y:yy},m{mm},d{dd},baseClass(yy,mm,dd)
    {

    }

   /* Date(int yy, int mm,int dd):baseClass(yy,mm,dd)

    {
         y = yy;
         m = mm;
         d = dd;
    }*/
private:
    int y;
    int m;
    int d;

    /*int y = 0;
    int m = 8;
    int d = 7;*/
};

int main(int argc, char *argv[])
{
    Date temp {3,4,5};
    std::cout << "Hello World!" << std::endl;
    foo("c"s);
    return 0;
}
