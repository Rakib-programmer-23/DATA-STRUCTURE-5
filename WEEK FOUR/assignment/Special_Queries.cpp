#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    
    queue<string>Q;
   
    while(q--)
    {
        int cmd;
        cin>>cmd;
        
       
        
      
        if(cmd==0)
        {
           string name;
           cin>>name;

           Q.push(name);
           
        }
        else if(cmd==1)
        {
           
            if(!Q.empty())
            {
            cout<<Q.front()<<endl;
            Q.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
             
        }
        else if(Q.empty())
        {
            cout<<"Invalid"<<endl;
            
        }
        
      
    }
      
    return 0;
}