


bool isSorted(int *arr, size)
{
    if(size==0||size==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    else
    {    
        bool remainingpart=isSorted(arr+1,size-1);
        return remainingpart;
    }
}

int getsum(int *arr,int size)
{
    if(size==0)
        return -1;
    if(size==1)
    {
        return arr[0];
    }
 
    int sum=arr[0]+getsum(arr+1, size-1);
    return sum;
}
int main()
{
    int arr[6]={2,3,6,32,65,53};
    int size=6;
    int ans= getsum(arr, size);
    cout<<ans;
}