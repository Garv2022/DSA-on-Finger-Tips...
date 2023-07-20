#include <bits/stdc++.h>
using namespace std;

int main()
{
    //create queue
    queue<int> q;

    q.push(2314);
    q.push(123);
    q.pop();
    bool ans = q.empty;

}

class Queue {
    int* arr;
    int rear;
    int qfront;
    int size;
public:
    Queue() {
        // Implement the Constructor
        int size = 100001;
        arr= new int[size];
        qfront = 0;
        rear = 0;

           
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(rear == qfront)
            return 1;
        else
            return 0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear==size)
          return;
        else
        {
            arr[rear]= data;
            rear++;
        }  
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront == rear)
            return -1;
        else
        {
            int ans =arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront == rear)
            {
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(qfront == rear)
            return -1;
        else
        {
            return arr[qfront];
        }
    }
};