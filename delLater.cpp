/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next = NULL;
};

void printL(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<"->";
        n = n->next;
    }
    cout<<"NULL";
}

void push(Node** head_ref, int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = *head_ref;
    *head_ref = temp;
}

void append(Node** head, int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    Node* last = *head;
    
    // if list is empty
    if (*head == NULL)
    {
        *head = temp;
        return;
    }
    
    while(last->next!=NULL)
    {
        last = last->next;
    }
    last->next = temp;
    return;
}

void reverse(Node** head)
{
    Node* prev = NULL;
    Node* curr = *head;
    Node* nextPtr;
    
    if (*head==NULL)
    {
        cout<<"Head is null";
        return;
    }
    
    while(curr)
    {
        nextPtr = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = nextPtr;
        
    }
    *head = prev;
    return;
}

void insertAfter(Node* prev, int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = prev->next;
    prev->next = temp;
    return;
}

int main()
{
    Node* head = NULL;
    
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    append(&head, 3);
    append(&head, 2);
    insertAfter(head, 24);
    
    printL(head);
    cout<<endl;
    reverse(&head);
    printL(head);

    return 0;
}

