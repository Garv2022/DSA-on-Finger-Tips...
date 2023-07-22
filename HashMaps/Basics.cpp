#include <bits/stdc++.h>
using namespace std;

int main()
{
    //creation
    unordered_map<string, int>m;

    //insertion 

    //1
    pair<string, int>p = make_pair("babbo", 3);
    m.insert(p);

    //2
    pair<string, int>q("love", 2);
    m.insert(q);

    //3
    m["mera"] = 1;

    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbo")<<endl;  
    
    //Input:
    cout<<m["love"]<<endl; //Output: 0
    cout<<m.at("love")<<endl; //Output: 0

    
    //Input:
    cout<<m.at("love")<<endl;  //Output: Error
    cout<<m["love"]<<endl;  //Output: 0
 
    //size
    int size = a.size();

    //to check presence
    int cnt = a.count("key"); // output: 0/1

    //erase
    m.erase("key");
    
    //traversal
    fro(auto i: m)
    {
        cout<<i.first<<i.second<<endl;
    }

    //iterator
    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end())
    {
        cout<<i.first<<i.second<<endl;
        it++;
    }

    return 0;
}
