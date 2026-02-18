#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    
    Node(int value):data(value),next(nullptr){};
    
};

Node *findmiddle(Node * head)
{
   
    if(head== nullptr)
    
        return nullptr;
         Node *slow=head;
    Node *fast=head;
    
while(fast!=nullptr && fast->next!=nullptr)
{
        {
        slow=slow->next;
        fast=fast->next->next;
        }
}
    return slow;
}
void printlist(Node *head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
cout<<"null"<<endl;
}


int main() {
   
   Node *head= new Node(100);
   head->next= new Node(2);
   head->next->next= new Node(30);
   head->next->next->next= new Node(40);
   head->next->next->next->next= new Node(50);
   head->next->next->next->next->next= new Node(0);
    printlist(head);
    cout<<findmiddle(head)->data<<endl;

    return 0;
}
