#include "mygreatclass.h"
static int myConst = 8;
using namespace myNameSpace;
int myGreatClass::myVar = 7;
int myGreatClass::staticMethod()
{
    myVar = 1;
    return ++myConst;
}

int myGreatClass::aMethod()
{
    static int myVar = 14;
    return ++myVar;
}
