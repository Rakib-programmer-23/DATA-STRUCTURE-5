/*

/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
/*
class Stack
{
    //Write your code here
    Node* head=NULL;
   Node* tail=NULL;
    int sz=0;

public:
    Stack()
    {
        //Write your code here  
        
    }

    int getSize()
    {
        //Write your code here
        return sz;
    }

    bool isEmpty()
    {
        //Write your code here
        return(sz==0); 
       

    }

    void push(int data)
    {
        //Write your code here
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

    void pop()
    {
        //Write your code here
        if (isEmpty())return;
        sz--;
        Node* deleteNode = tail;

        if (head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            Node* currentNode = head;
            while (currentNode->next != tail)
            {
                currentNode = currentNode->next;
            }
            currentNode->next = NULL;
            tail = currentNode;
        }
        delete deleteNode;
    }

    int getTop()
    {
        //Write your code here
        if(head==NULL)
        {
            return -1;
        }
        return tail->data;
    }
};
*/

