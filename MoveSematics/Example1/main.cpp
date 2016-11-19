#include <string>
#include <iostream>>
struct data
{
    std::string str1 = "hello";
    std::string str2 = "world";
};

class foo
{
  public:
    //default Constructor
    foo()
    {
        std::cout<<"foo inside default constrctor"<<std::endl;
    }

    //default Constructor
    explicit foo(data * dataIn) {
        address = dataIn;
        std::cout<<"foo inside conversion constrctor"<<std::endl;

    }

    //destructor
    ~foo(){
        address = nullptr;
        std::cout<<"foo inside destructor"<<std::endl;
    }

     //copy constructor
    foo(const foo & copy){
        address = copy.address; //shallow copy
        std::cout<<"foo inside copy constructor"<<std::endl;

    }

    //assignment operator
    foo& operator=(const foo & copy){
        std::cout<<"foo inside assignment operator"<<std::endl;
        //Check if doing deep copy plus other things
        if(this != &copy)
        {
            address = copy.address; //shallow copy
        }
        return *this;
    }

     //Move constructor
    foo(foo && other){
        std::cout<<"foo inside move constructor"<<std::endl;
        address = other.address;
        other.address = nullptr;
    }


    //move assignment operator
    foo& operator=(foo && other )
    {
        std::cout<<"foo inside move assignment operator"<<std::endl;
        //Check make sure that you do not null your self out
        if(this != &other)
        {
            address = other.address;
            other.address = nullptr;
        }
        return *this;
    }

private:
    data * address;
};


int main()
{
    data data1;
    foo myfoo0;
    foo myfoo(&data1);
    foo myfoo2 = myfoo;
    //foo myfoo3 = foo(myfoo);
  return 0;
}
