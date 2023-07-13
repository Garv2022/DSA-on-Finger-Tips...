#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin>>n;
    cin>>m;
    cout<<endl;
    int height[n];
    for(int i=0;i<n;i++)
    {
        cin>>height[i];
    }
    sort(height, height+n);
    int s=0, e=0;
    int mid= s+(e-s)/2;
    int sum=0, ans;
    while(s<=e)
    {
        if(height[mid]>m)
        {
            for(int i=n-1;i<mid-1;i--)
            {
                sum+=height[i]-mid;
                if(sum=m)
                    ans=height[mid];
                else if(sum<m)
                    break;
            }
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        return ans;
        mid= s+(e-s)/2;
    }
    return -1;

}