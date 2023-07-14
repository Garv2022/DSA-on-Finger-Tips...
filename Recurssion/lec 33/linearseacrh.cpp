#include <iostream>
using namespace std;

bool ls(int *arr,int size, int key)
{
    if(size==0)
        return false;
    if(key==arr[0])
        return true;
    else
    {
        bool remainingpart=ls(arr+1, size-1, key);
        return remainingpart;
    }
    
}

int main()
{
    int arr[6]={2,3,6,32,65,53};
    int size=6;
    int key=45;
    bool ans= ls(arr, size, key);
    if(ans)
    {
        cout<<"PRESENT"<<endl;
    }
    else
    {
        cout<<"NOT PRESENT"<<endl;
    }
}