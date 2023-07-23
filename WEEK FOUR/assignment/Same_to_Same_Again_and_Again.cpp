#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    queue<int>q;
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if(n!=m)
    {
        cout<<"NO";
        return 0;
    }
    bool equal=true;
    while(!st.empty() && !q.empty())
    {
        if(st.top() != q.front())
        {
            equal=false;
            break;
        }
        st.pop();
        q.pop();
    }

    if(equal)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

      
    return 0;
}