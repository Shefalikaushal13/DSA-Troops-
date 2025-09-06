#include<iostream> 
using namespace std; 
// NODE class
class Node{
    public: 
    int val; 
    Node* next; 
    Node(int val)
    {
        this->val=val; 
        this->next=NULL; 
    }
}; 
// Display 
void display(Node* head)
{
    Node* temp = head; 
    while(temp->next!=NULL)
    {
        cout<<temp->val<<" "; 
        temp = temp -> next;
    }
}
// Size 
int size(Node* head)
{
    int count = 0 ;
    Node* temp = head;  
    while(temp!=NULL)
    {
        count++; 
        temp = temp->next; 
    }
    return count; 
}
// Recursive Display
void recursiveDisplay(Node* head)
{
    cout<<head->val<<endl; 
    if(head->next==NULL) return; // base case 
    recursiveDisplay(head->next); 
}

// Recursive Reverse Display
void recursiveReverseDisplay(Node* head)
{
    if(head->next==NULL) return; // base case 
    recursiveReverseDisplay(head->next); 
    cout<<head->val<<endl; 
}

void insertAtEnd(Node* head,int val)
{
    Node* temp = new Node(val); 
    while(head->next!=NULL)
    {
        head = head->next; 
    }
    head->next=temp; 
    
}

int main()
{
    //creation of a linked list 
    Node *a = new Node(10); 
    Node *b = new Node(20); 
    Node *c = new Node(30); 
    Node *d = new Node(40); 

    //linking of a link list 
    a->next = b; 
    b->next = c; 
    c->next = d; 
    display(a); // need only 
    cout<<size(a);
    recursiveDisplay(a); 


}

