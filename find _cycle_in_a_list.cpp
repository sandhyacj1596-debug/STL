#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    
    int data;
    Node *next;
    Node(int val):data(val),next(nullptr){}
    
};

bool hascycle(Node *head)
{
    if(head==nullptr)
    return false;
    Node *slow=head;
    Node *fast=head;
    
    while(fast!=nullptr && fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow== fast)
        {
            return true;
        }
        
    }
    return false;
}

int main() {
    Node *head= new Node(10);
    
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    cout<<(hascycle(head)? "yes" : "no")<<endl;
    Node *head1=new Node(10);
    head1->next=new Node(20);
    head1->next->next=new Node(30);
    head1->next->next->next=new Node(40);
    //head1->next->next->next->next=head;
    cout<<(hascycle(head1)? "yes" : "no")<<endl;
    return 0;
}
