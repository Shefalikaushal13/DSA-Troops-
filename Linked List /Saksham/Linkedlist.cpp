#include<iostream> 
using namespace std; 

class Node{
    public: 
    int val; 
    Node* next; 
    Node(int val)
    {
        this->val = val ;
        this ->next = NULL; 
    }
};

class Linkedlist{
    public: 
    Node* head; // maintain the head node 
    Node* tail; // maintain the tail node
    int size;  // size changes while insertion and deletion 
    // constructor
    Linkedlist()
    {
        head=tail=NULL; 
        size = 0; 
    }
    // insert at end
    void insertAtEnd(int val){
        Node* temp = new Node(val); // created a new node with val value 
        if(size==0) head = tail = temp; 
        else{
            tail->next = temp; //link the new node
            tail=temp; // update the tail 
        }
        size++; 
    }
    // insert at beginning 
    void insertAtBeg(int val){
        Node* temp = new Node(val); // created a new node with val value 
        if(size==0) head = tail = temp; 
        else{
            temp->next = head; //link the new node to head node
            head=temp; // update the head
        }
        size++; 
    }
    // insert at certain index 
    void insertAtIdx(int val, int idx)
    {
        if(idx<0 || idx>size) cout<<"Invalid index"<<endl; 
        else if(idx == 0)
        {
            // push at head 
            insertAtBeg(val); 
        }
        else if(idx==size)
        {
            // push to the tail 
            insertAtEnd(val); 
        } 
        else { 
            Node* t = new Node(val); // created a new node 
            // now we need to traverse till that index
            Node* temp = head; 
            for(int i=0; i<idx; i++) 
            {
                temp=temp->next; // we reached at the desired idx 
            }
            t->next = temp->next; 
            temp->next=t; 
            size++; 

        }
    }
    // displaying the linked list 
    void display()
    {
        Node* temp = head; 
        while(temp!=NULL)
        {
            cout<<temp->val<<" "; 
            temp = temp->next; 
        }
    }
    // get at particular index 
    int getAtIndex(int idx)
    {
        if(idx<0||idx>=size) 
        {
            cout<<"invalid index"<<endl; 
            return -1; 
        }
        if(idx==0) return head->val; 
        if(idx==size-1) return tail->val; 
        else{
            Node* temp = head; 
            for(int i=0; i<=idx; i++)
            {
                temp = temp->next; 
            }
            return temp->val; 
        }
    }
    // delete at head 
    void deleteAtHead()
    {
        if(size==0)cout<<"List is empty"<<endl; 
        else if (size>=1)
        {
            head=head->next; 
            size--; 
        }
    }
    // delete at tail 
    void deletAtTail()
    {
        if(size==0) cout<<"list is empty"<<endl; 
        else if (size>=1)
        {
            Node* temp = head; 
            while(temp->next!=tail)
            {
                temp = temp->next; 
            }
            temp->next = NULL; 
            tail = temp; 
            size--; 
        } 
    }
    // delete at index 
    void deleteAtIdx(int idx)
    {
        if(idx<0||idx>=size)
        {cout<<"List is empty"<<endl;
        return; }
        if(idx==0){
            deleteAtHead();
            return;
        }
        else if (idx==size-1){
            deleteAtTail();
            return;
        }
        else
        {
            Node* temp  = head;
            int i = 0 ;
            while(i<idx-1)
            {
                temp=temp->next;
                i++;
                
            }
            temp=temp->next->next;
            size--;
        }
       
    }


}; 

int main()
{
    Linkedlist ll; 
    cout<<ll.head<<endl;
    cout<<ll.size<<endl; 
    ll.insertAtBeg(10); 
    ll.insertAtBeg(20); 
    ll.insertAtEnd(30); 
    cout<<ll.size<<endl; 
    cout<<ll.head->val<<endl; 
    ll.display();
}

