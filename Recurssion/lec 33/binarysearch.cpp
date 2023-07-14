#include <iostream>
using namespace std;

bool binarysearch(int *arr, int s, int e, int key)
{
    int mid=(e-s)/2; 

    if(size==0)
        return -1;

    if(key==arr[mid])
        return 1;

    else if(key>arr[mid])
    {
        bool remainingpart= binarysearch(*arr,mid+1, e, key);
            return remainingpart;
    }
    else
    {
        bool remainingpart= binarysearch(*arr,s, mid-1, key);
            return remainingpart;
    }
}


int main()
{
    int arr[6]={233,31,63,32,65,53};
    int s=0;
    int e=5;
    int key=45;
    sort(arr,arr+size);
    bool ans= binarysearch(arr, s, e, key);
    if(ans)
    {
        cout<<"PRESENT"<<endl;
    }
    else
    {
        cout<<"NOT PRESENT"<<endl;
    }
}