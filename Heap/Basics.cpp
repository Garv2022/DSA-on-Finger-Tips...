#include <bits/stdc++.h>
using namespace std;

class heap
{
    public:
        int arr[100];
        int size=0;       
        heap()
        {
            arr[0] =-1;
            size =0;
        }

        void insert(int val)
        {
            size =size+1;
            int index =size;
            arr[index]= val;

            while(index >1)
            {
                int parent = index/2;

                if(arr[parent] < arr[index])
                {
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else
                {
                    return;
                }
            }
        }

        void print()
        {
            for(int i=1;i<size;i++)
            {
                cout<<arr[i];
            }
            cout<<endl;
        }

        void deleteFromHeap()
        {
            if(size == 0)
            {
                cout<<"Invalid"<,endl;
                return;
            }

            //Step 1: Put Last Element In 1st Index
            arr[1] = arr[size];

            //Step 2: Remove Last Element
            size--;
            
            //Step 3: Take root node to its correct position
            int i=1;
            while(i<size)
            {
                int leftIndex = 2*i;
                int rightIndex = 2*i + 1;
                
                if(leftIndex < size && arr[i] < arr[leftIndex])
                {
                    swap(arr[i], arr[leftIndex]);
                    i = leftIndex;
                }
                else if(rightIndex < size && arr[i] < arr[rightIndex])
                {
                    swap(arr[i], arr[rightIndex]);

                }
            }
        }
};

//Max heap banega re bawa and 1 se indexing
void heapify(int arr[], int n, int i)
{
    int largest =i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if(right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if(largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

//Heap Sort
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

    heap h;
    h.insert(3423);
    h.insert(34);
    h.insert(23);
    h.print();
    h.deleteFromHeap();

    int arr[6] = {-1,54,53,55,52,50}
    int n =5;

    //heap creation
    for(int i=n/2; i>0; i--)
    {
        heapify(arr, n, i);
    }

    cout<<"printing arr now"<<endl;
    for(int i=1; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    //heap Sort
    heapSort(arr,n);

    return 0;
}