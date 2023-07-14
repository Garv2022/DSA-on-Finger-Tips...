#include <iostream>
using namespace std;

fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int smallerProblem= fact(n-1);
    int biggerProblem= n*smallerProblem;
    return biggerProblem;

    // return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    in ans= fact(n);
}