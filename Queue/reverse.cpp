//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> s;
    
    while(!q.empty())
    {
        int c = q.front();
        q.pop();
        s.push(c);
    }
    while(!s.empty())
    {
        int d = s.top();
        s.pop();
        q.push(d);
    }
    return q;
}