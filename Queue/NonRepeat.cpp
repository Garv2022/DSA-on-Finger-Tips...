#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<char> q;
		    map<char, int> count;
		    string ans="";
		    
		    for(int i=0;i<A.length();i++)
		    {
		         char ch=A[i];
		         
		         //increase count
		         count[ch]++;
		         
		         //queue me push karo
		         q.push(ch);
		         
		         while(!q.empty())
		         {
		             if(count[q.front()]>1)
		             {
		                 q.pop(); //repeating character
		             }
		             else
		             {
		                 //non-repeating character
		                 ans.push_back(q.front());
		                 break;
		             }
		         }
		         if(q.empty())
		            ans.push_back('#');
		         
		    }
		    return ans;
		}
        

};

