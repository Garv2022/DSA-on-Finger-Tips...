#include <iostream>
using namespace std;

class Hero
{
    //prop. 
    public:
    int health;
    static int timetoCompete;
    char level;
    char name;


    Hero()
    {
        cout<<"constructor called"<<endl;
        name= new char[100];
    }

   
    Hero(char level,int health )
    {
        this->health;
        this->level;//replaces problem: level=level;
    }

    static int random()
    {
       return timetoCompete;
    }

    //Destructor
    ~Hero()
    {
        cout<<"calling dextructor bhai"<<endl;       
    }
};

int Hero: : timetoCompete=5; 

int main()
{
    cout<<Hero: : timetoCompete<<endl;
    cout<<Hero: : random()<<endl;


  //static memory
    Hero a;
    cout<<a.timetoCompete<<endl; //called satic keyword



    //dynamic memory
    /*Hero *b= new Hero();
    delete b;*/

    return 0; 

    //https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382190 
}