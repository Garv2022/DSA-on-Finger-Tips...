#include <iostream>
using namespace std;

void update(int **ptr2)
{
    p=p+1;
    // kuch ni badla main mai , val. update mai change huyi

    *p=*p+1;
    //

    **p=**p+1;

}
int main()
{
    int a=1;
    int *ptr1=&a;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;

    //return val of a
    cout<<a<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;
    cout<<***ptr3<<endl;

    //update func
    update(ptr2);

    //return add. of a
    cout<<&a<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr2<<endl;
    cout<<**ptr3<<endl;

    //return add. of ptr1
    cout<<&ptr1<<endl;
    cout<<ptr2<<endl;

    int n;
    cin>>n;
    //creating an array
    int *arr= new int[];

    //creating 2-D array
    int **arr=new int*[];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }


    //creating 2-D array
    int row;
    cin>>row;

    int col;
    cin>>col;

    int**arr=new int*[];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }

    //taking input normally hoga arrays ka hota hai jaisi

    //releasing memory
    for(int i=0;i<row;i++)
    {
        delete [] arr[];
    }

    delete []arr;


    return 0;

}