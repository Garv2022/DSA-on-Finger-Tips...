#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int arr[n][m];

    //input
    for(int i=0,i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    //sum of rows
    int new[n];
    for(int i=0,i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
        new[i]=sum;
    }

    //largest sum wali row 
    int large;
    for(int i=0;i<n-1,i++)
    {
        if(new[i]>new [i+1])
        {
            large=i;
        }
        else
            large=i+1;
    }
    cout<<large<<endl;


    //output
    for(int i=0,i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
    }

}