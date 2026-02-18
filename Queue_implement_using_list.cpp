#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    
    Node(int val):data(val),next(nullptr){}
    
};
class Queue 
{
    public:
    Node *front;
    Node *rear;
    
    Queue() :front(nullptr),rear(nullptr){}
    
    void enqueue(int value)
    {
        Node *newNode= new Node(value);
        if(isempty())
        {
            front=rear=newNode;
            cout<<value<<"enqueued to the Queue"<<endl;
            return;
        }
        
        
        rear->next=newNode;
        rear=newNode;
        cout<<value<<"enqueued to the Queue"<<endl;
        
        
    }
    void dequeue()
    {
        if(isempty())
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    Node *temp=front;
front=front->next;
// ✅ CRITICAL FIX: Update rear when queue becomes empty
    if(front == nullptr)
    {
        rear = nullptr;
    }
    
    cout<<temp->data<<endl;
    delete temp;
    
    }
  int peek()
  {
      if(isempty())
    {
        cout<<"queue is empty"<<endl;
        return -1;
    }  
    return front->data;
    
  } 
  bool isempty()
  {
     return front==nullptr;
  }
  void display()
  {
     if(isempty())
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    
    Node *temp= front;
    while(temp!=nullptr)
    {
    cout<<temp->data<<endl;
    temp=temp->next;
    }
  }
  ~Queue()
  {
      while(!isempty())
      {
          dequeue();
      }
  }
};

int main()
{
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(60);
    q1.display();
    q1.dequeue();
    q1.display();
    q1.peek();
    while(!q1.isempty())
    {
       q1. dequeue();
    }
    cout<<"queue is empty"<<endl;
    return 0;
}
