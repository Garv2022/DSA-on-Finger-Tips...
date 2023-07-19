#include <iostream>
using namespace std;

class Hero
{
    //prop. 
    public:
    int health;

    //private 
    private:
    char level;
    char name;


    Hero(){
        cout<<"constructor called"<<endl;
        name= new char[100];
    }

    //Parameterised constructor
    Hero(char level)
    {
        cout<<"this->"<<this<<endl;
        this->level=level;
    }


    //copy constructor
    Hero (Hero&  temp)
    {
        char ch= new char [strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name= ch;


        this->health=temp->health;
        this->level=temp->level;
    } 
    Hero(char level,int health )
    {
        this->health;
        this->level;//replaces problem: level=level;
    }

    //func inside class
    void print()
    {
        cout<<"Name:"<<this->name<<endl;
    }

    //getter
    int gethealth()
    {
        return health;
    }
    
    char getlevel()
    {
        return level;
    }

    //setter
    void sethealth(int h)
    {
        health =h;
    }

    void setlevel(int l)
    {
        level=l;
    }

    void setname(char name)
    {
        strcpy(this->name, name);
    }
};

int main()
{
    //object created statically
    Hero ram(1000);
    //cout<<"address of ram"<<&ram<<endl;
    //ram.level();
    ram.print();
    

    //dynamically
    Hero *h= new hero(10);
    h->print();

    Hero temp(22, 'B');
    temp.print();

    Hero S('D', 90);
    S.print();

    //use default copy constructor
    Hero R(S);
    R.print();
    Hero hero2(hero1);
    hero2.print();  

    //change kia hero1 mai
    hero1.name[0]='G';
    hero1.print();
    hero2.print();// hero2 mai bhi change ho gya 



    Hero hero1;
    hero1.sethealth(100);
    hero1.level('W');
    char name[6]="Babbo";
    hero1.setname(name);

    hero1.print();



}