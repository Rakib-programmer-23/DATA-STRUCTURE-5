#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
   

    while(T--)
    {
        string  s;
        cin>>s;
        queue<char>q;
        
        for(char c:s)
        {
           if(!q.empty() && (q.front()=='A' && c=='B'))
           {
            q.pop();
           }
           else if(!q.empty() && (q.front()=='B' && c=='A'))
           {
            q.pop();
           }
           else
           {
            q.push(c);
           }


        }
       
        
        
        if(q.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        




        

    }
      
    return 0;
}