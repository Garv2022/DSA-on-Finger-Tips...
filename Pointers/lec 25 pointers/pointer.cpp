#include <iostream>
using namespace std;
int main()
{
    //tareeka to write pointers
    //*int num=6;
    /*int *p=&num;

    int *q=0;
    *q=&num;
    
    //adress of array ka pehla block
    int arr[10];
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;*/

    //char array
    char ch[6]="abcde";
    cout<<ch<<endl;

    char *c=&ch[0];
    cout<<c<<endl;
    cout<<*c<<endl;

    int arr[5]={1,2,3,4,5};
    cout<<arr<<endl;

    int *ptr=&arr[0];
    cout<<ptr<<endl;

    //z ke saath aur bhi cheeze print hui, jab takk null nahi mila till there sab print hua.
    char temp='z';
    char *pr=&temp;
    cout<<pr<<endl;

    


}