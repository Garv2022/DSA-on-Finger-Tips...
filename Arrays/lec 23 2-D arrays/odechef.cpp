
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
    	int n, k;
    	cin>>n>>k;
    	int arr[100];
    	int ans=1;
    	for(int i=0;i<n;i++)
    	{
    	    cin>>arr[i];
    	}
    	for(int i=0;i<n-1;i++)
    	{
    	    ans=ans*arr[i];
    	    if(ans%k==0)
    	    {
    	        cout<<"YES"<<endl;
    	        break;
    	    }
    	    
    	}
        if(ans%k!=0)
        {
            cout<<"NO"<<endl;
        }
    	
	}
	return 0;
}