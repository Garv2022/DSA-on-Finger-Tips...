#include <iostream>
using namespace std;

class A
{
    public:
    void sayHi()
    {
        cout<<"HI"<<endl;
    }

    void sayHi(string name)
    {
        cout<<"HI"<<endl;
    }

    int sayHi(string name, int s)
    {
        cout<<"HI"<<endl;
        return 1;
    }
};

//compile time polymorphism
class B
{
    public:
    int a;
    int b;

    public:
    int add()
    {
        return a+b;
    }

    void operator+ (B &obj)
    {
        int value1=this->a;
        int value2=obj.a;
        cout<<"output"<<value2-value1<<endl;
    }

    void operator() ()
    {
        cout<<"main bracket hu"<<this->a<<endl;
    }
};


int main()
{
    B obj1, obj2;
    obj1.a=5;
    obj2.a=59;

    obj1 + obj2;
    A obj;
    obj.sayHi();

    return 0;
}

