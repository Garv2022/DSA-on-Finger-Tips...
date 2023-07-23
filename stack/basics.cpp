#include <bits/stdc++.h>
using namespace std;

class Stack:
{

    //properties
    public:
        int *arr;
        int top;
        int size;

    //behaviour
    Stack(int size)
    {
        this->size= size;
        arr= new int[size];
        top=-1;
    }

    void push(int element)
    {
        if(size-tpo>1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack UnderFlow"<<endl;
        }
    }

    int peek()
    {
        if(top>=0 && top<size)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
        }
        
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}


int main()
{
    //stack creation LIFO
    stack<int> s;

    //push operation
    s.push(34);
    s.push(423);

    //pop
    s.pop();

    //top
    s.top();

    return 0;
}