#include <bits/stdc++.h>
using namespace std;

void heapSort(int arr[], int n)
{
    int t = n;

    while(t > 1)
    {
        //Step 1: Swap
        swap(arr[size], arr[1]);
        size--;

        //Step 2:
        heapify(arr, size, 1);
    }

}

int main()
{
    int arr[6] = {-1,54,53,55,52,50}
    int n =5;   
    
    //heap creation
    for(int i=n/2; i>0; i--)
    {
        heapify(arr, n, i);
    }

    //heapSort
    heapSort(arr,n);
    
}