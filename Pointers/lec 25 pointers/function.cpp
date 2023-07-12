#include <iostream>
using namespace std;


void print(int *ptr)
{
    cout<*ptr<<endl;
}

//val. update huyi ptr ki inside this func only 
//*ptr will be updated
void update(int *ptr)
{
    ptr=ptr+1;
    *ptr=*ptr+1;
}

//ptr ka val. depends upon int main() only
int main()
{
    int value=5;
    int *ptr=&value;

    //print(ptr);

    cout<<"before update"<<ptr<<endl;

    update(ptr);
    cout<<"after update"<<ptr<<endl;

    return 0;

}