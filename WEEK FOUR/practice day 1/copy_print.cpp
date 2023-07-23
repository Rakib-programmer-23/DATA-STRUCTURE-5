#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    stack<int>newst;

    while(!st.empty())
    {
        int k=st.top();
       
        st.pop();
        newst.push(k);
    }

    while(!newst.empty())
    {
        cout<<newst.top()<<" ";
        newst.pop();
    }
      
    return 0;
}