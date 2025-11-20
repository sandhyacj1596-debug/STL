#include <iostream>
using namespace std;

class Node
{
     public:
    int data;
    Node *next;

    Node(int value)
    {
        data= value;
        next= nullptr;
    }
};
Node *reverselist(Node *head)
{
    Node *current= head;
    Node *prev=nullptr;
    Node *next;
    
    while(current!=nullptr)
    {
        next= current->next; // save next
        current->next=prev; // reverse pointer
        prev= current; // move prev forward
        current=next; // move current forward
        
    }
    return prev;
}
void printlist(Node *node)
{
    while(node!=nullptr)
    {
        cout<<node->data<<endl;
        node=node->next;
    }
}

int main() {
    // Write C++ code here
  //  std::cout << "Try programiz.pro";
Node *head= new Node(1);
head->next= new Node(2);
head->next->next= new Node(3);
head->next->next->next=new Node(4);
head->next->next->next->next=new Node(5);

cout<<"original list"<<endl;
printlist(head);

head= reverselist(head);
cout<<"reversed list"<<endl;
printlist(head);
return 0;
}
