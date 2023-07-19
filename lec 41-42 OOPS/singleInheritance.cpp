#include <iostream>
using namespace std;

//runtime polymorphism
class Animal
{
    public:
    int age;
    int weight;

    public:
    void speak()
    {
        cout<<"Speaking "<<endl;
    }
};

class Dog: public Animal
{
    void speak()
    {
        cout<<"Barking"<<endl;
    }   
};

int main()
{
    Dog obj;
    obj.speak(); //barking hoga print


    return 0;
}