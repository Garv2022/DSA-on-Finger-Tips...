#include <iostream>
using namespace std;
int reverse(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<reverse(arr, n)<<endl;  
    return 0;
}
