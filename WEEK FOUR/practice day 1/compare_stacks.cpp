#include<bits/stdc++.h>
using namespace std;
class mystack
{
    public :
           list<int>l;
           void push(int val)
           {
            l.push_back(val);
           }
           void pop()
           {
            l.pop_back();
           }
           int top()
           {
            return l.back();
           }
           int size()
           {
            return l.size();
           }
           bool empty()
           {
                if(l.size() == 0) return true;
                else return false;
           }

};
int main()
{
   int n,m;
   cin>>n;


   mystack st1; 
   mystack st2;

   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    st1.push(x);
   }

   cin>>m;
   for(int i=0;i<m;i++)
   {
    int x;
    cin>>x;
    st2.push(x);
   }

  
   if(n!=m)
   {
    cout<<"NO";
    return 0;
   }

   bool equal =true;
   while(!st1.empty() && !st2.empty())
   {
    if(st1.top() != st2.top())
    {
        equal = false;
        break;
    }
    st1.pop();
    st2.pop();
   }


   if(equal)
   {
    cout<<"YES"<<endl;
   }

   else
   {
    cout<<"NO";
   }

    return 0;
}