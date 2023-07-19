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
    char lol;

    //func inside class
    void print()
    {
        cout<<lol<<endl;
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
};



int main()
{   
    //creation of object
    //static allocation
    Hero hanuman;
    hanuman.sethealth(1000);
    hanuman.setlevel('Q');
    cout<<"health is"<<hanuman.health<<endl;
    cout<<"level is"<<hanuman.getlevel()<<endl;

    //dynamic allocation;
    Hero *ram= new Hero;
    ram->sethealth(10000);
    ram->setlevel('W');
    cout<<"health is"<<(*ram).health<<endl;
    cout<<"level is"<<(*ram).getlevel()<<endl;

    cout<<"level is"<<ram->getlevel()<<endl;
    cout<<"level is"<<ram->health<<endl;

    krishna.health=10;
    krishna.level="B";
    krishna.lol="abc"

    //use of setter
    krishna.sethealth(999);
    cout<<"health is"<<krishna.gethealth()<<endl;


    cout<<"size: "<<sizeof(krishna)<<endl;
    cout<<"health is"<<krishna.health<<endl;
    cout<<"level is"<<krishna.level<<endl;

    //this can be replaced by
    //krishna.health=10;
    //cout<<"health is"<<krishna.health<<endl;
    cout<<"health is"<<krishna.gethealth()<<endl;

    return 0;
}