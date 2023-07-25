#include <iostream>
#include <queue>

//STL JINDABAAD
int main()
{
   //maxHeap
   priority_queue<int> pq;

    pq.push(4);
    pq.push(22);
    pq.push(23123);
    pq.push(2312);
    pq.pop();
    pq.empty();
    pq.top();
    pq.size();

    //Min Heap
    priority_queue<int, vector<int>, greater<int> > minHeap;
    minHeap.push(4);
    minHeap.push(22);
    minHeap.push(23123);
    minHeap.push(2312);
    minHeap.pop();
    minHeap.empty();
    minHeap.top();
    minHeap.size();
}