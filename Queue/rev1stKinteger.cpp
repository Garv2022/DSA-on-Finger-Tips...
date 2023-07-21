//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    queue<int> l;
    int count=0;
    while(!q.empty() && count<k)
    {
        int c = q.front();
        q.pop();
        s.push(c);
        count++;
    }
    
    int count1=0;
    while(!s.empty() && count1<k)
    {
        int d = s.top();
        s.pop();
        l.push(d);
        count1++;
    }
    
    while(!q.empty())
    {
        int c = q.front();
        q.pop();
        l.push(c);
    }  
    

    
    return l;
    
    
    
}