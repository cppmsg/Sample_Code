#include <iostream>
#include <vector>
#include <array>
#include <exception>

void matrix()
{
   int myMatrix [100][100]= {0,0};
   int first = myMatrix[0][0];

   std::array<std::array<int,100>,100> mystdArray;
   int firstArray =mystdArray[0][0];
}

void allocCArrayOnHeap()
{
    long * myArray = nullptr;
    try
    {
       myArray = new long [4'000'000'000'000];
    }
    catch(const std::exception& e)
    {
        //prints Catch std::bad_alloc
        std::cout<<"Catch "<<e.what()<<std::endl;
    }
}

void allocStd()
{
    //This Will Crash
    std::vector<long> myVector;
    myVector.reserve(4'000'000'000'000);

    //This Will Crash
    std::array<long,4'000'000'000'000> myArray;
}

int main(int argc, char *argv[])
{
    return 0;
}
