#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
   Node(int value)
   {
       data=value;
       next=nullptr;
   }
};
class stack
{
    Node *top;
    public:
   stack()
    {
        top=nullptr;
    }
    ~stack()
    {
        while(!isempty())
        {
            pop();
        }
    }
    bool isempty()
    {
        return top== nullptr;
    }
    
    void push(int value)
    {
        Node *newNode= new Node(value);
        //newNode->data= value;
        newNode->next=top;
        top= newNode;
    }
    int pop()
    {
        if(isempty())
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        
        Node *temp= top;
        int popped_value= temp->data;
        top=top->next;
        delete temp;
        return popped_value;
    }
    int peek()
    {
        if(isempty())
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
    void display()
    {
        if(isempty())
        {
            cout<<"stack is empty"<<endl;
            return ;
        }
        
        Node *temp= top;
        while(temp!=nullptr)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
int main()
{
    stack s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   s.display();
   cout<<s.peek()<<endl;;
   s.pop();
   //cout<<s.peek()<<endl;
   s.display();
   cout<<s.peek()<<endl;
    return 0;
}
