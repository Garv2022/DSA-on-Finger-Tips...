#include <iostream>
using namespace std;

char uppertoLowerCase(char string[])
{
    if(string>='a'&&string<='z')
    {
        return string;
    }
    else
    {
        char temp= string-'A'+'a';
        return temp;
    }

}


char checkPallindrome(char string[], int n)
{
    int a=0;
    int e=s.size()-1;
    while(e>a)
    {
        if(s[a]!=s[e])
        {
            return 0;
        }
        else
        {
            a++;
            e--;
        }
    }
    return 1;
}


void getReverse(char string[], int n)
{
    int s=0;
    int e=n-1;
    while(e>s)
    {
        swap(string[s++], string[e--]);
    }
}


int getLength(char string[])
{
    int count =0;
    for(int i=0;string[i]!='\0';i++)
    {
        count++;
    }
    return count;
}


int main()
{
    char string[10];
    cin>>string;
    int n= getLength(string);
    getReverse(string,n);
    checkPallindrome(string, n);
    cout<<"reverse str";
    cout<<string<<endl;

}



char getMaxChar(string s)
{

}

int main()
{
    string str;
    cin>>str;
}