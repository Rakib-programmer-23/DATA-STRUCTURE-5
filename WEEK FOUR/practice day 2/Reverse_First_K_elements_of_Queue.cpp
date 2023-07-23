/*

#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int>s;
    queue<int>newQ;
    while(k)
    {
        s.push(q.front());
        q.pop();
        k--;
    }
    while(!q.empty())
    {
        newQ.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while(!newQ.empty())
    {
        q.push(newQ.front());
        newQ.pop();
    }
    return q;
}




*/