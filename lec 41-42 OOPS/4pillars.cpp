#include <iostream>
using namespace std;

//encapsulation
class Student
{
    private:
        string name;
        int age;
        int height;

    public:
    int getAge()
    {
        return this->age;
    }
};

//inheritance
class Human
{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge()
    {
        return this->age;
    }
};

class Male: public Human
{
    public:
    string color;

    void sleep()
    {
        cout<<"Male Sleeping",,endl;       
    }


};

int main()
{

    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.color<<endl;

    object1.setweight(82);
    cout<<object1.weight<<endl;

    object1.sleep();
    return 0;
}