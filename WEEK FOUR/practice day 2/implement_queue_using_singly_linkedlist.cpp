/*

#include <bits/stdc++.h> 
class Node{
     public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
};
class Queue
 {
    Node* head;
    Node* tail;
    int sz;
public:
    Queue()
     {
        // Implement the Constructor

        head=NULL;
        tail=NULL;
        sz=0;
    }

   

    bool isEmpty() {
        // Implement the isEmpty() function
        return (sz==0);
    }

    void enqueue(int data)
     {
        // Implement the enqueue() function
        sz++;
        Node* newNode= new Node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }

    int dequeue() 
    {
        // Implement the dequeue() function
   
    if (isEmpty()) return -1;
    sz--;
    Node* deleteNode = head;

    if (head == tail) 
    {
        head = NULL;
        tail = NULL;
    }
     else 
    {
        Node* current= head;
        current=current->next;
        head=current;
    }
    int deletedData = deleteNode->data;
    delete deleteNode;
    return deletedData;
    }

    

    int front() 
    {
        // Implement the front() function


        if(head==NULL)
        {
            return -1;
        }
        return head->data;
    }
};

*/