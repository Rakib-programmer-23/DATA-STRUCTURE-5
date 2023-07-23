/*

#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		list<int>l;
		list<int>newl;
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			l.push_back(num);
			if(newl.empty() || num<=newl.back())
			{
				newl.push_back(num);
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(l.empty()) return -1;
			int value = l.back();
			l.pop_back();
			if(value == newl.back())
			{
				newl.pop_back();
			}
			return value;
			

		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(l.empty()) return -1;
			return l.back();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if (newl.empty()) return -1;
			return newl.back();
    		
		}
		int size()
		{
			return l.size();
		}
		bool empty()
		{
			if(l.size()==0)return true;
			else return false;
		}
};


*/