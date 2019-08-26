#include<iostream>
using namespace std;

struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
  

void push(struct Node** head_ref, int new_data); 
  

bool isPresent(struct Node *head, int data); 
  
struct Node *getUnion(struct Node *head1, struct Node *head2) 
{ 
    struct Node *result = NULL; 
    struct Node *t1 = head1, *t2 = head2; 
  
    while (t1 != NULL) 
    { 
        push(&result, t1->data); 
        t1 = t1->next; 
    } 
  
    
    while (t2 != NULL) 
    { 
        if (!isPresent(result, t2->data)) 
            push(&result, t2->data); 
        t2 = t2->next; 
    } 
  
    return result; 
} 
  

void push (struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = 
        new_node = new Node;
  
    
    new_node->data = new_data; 
  
    
    new_node->next = (*head_ref); 
  
   
    (*head_ref) = new_node; 
} 
  

void printList (struct Node *node) 
{ 
    while (node != NULL) 
    { 
     cout<<node->data<<"\t"; 
        node = node->next; 
    } 
} 
  
bool isPresent (struct Node *head, int data) 
{ 
    struct Node *t = head; 
    while (t != NULL) 
    { 
        if (t->data == data) 
            return 1; 
        t = t->next; 
    } 
    return 0; 
} 
  
int main() 
{ 
    struct Node* head1 = NULL; 
    struct Node* head2 = NULL; 
  
    struct Node* unin = NULL; 
  
    push (&head1, 10); 
    push (&head1, 4); 
    push (&head1, 23); 
    push (&head1, 15); 
  
    push (&head2, 10); 
    push (&head2, 82); 
    push (&head2, 16); 
    push (&head2, 6); 
    unin = getUnion (head1, head2); 
  
    cout<<"first list is"<<endl; 
    printList (head1);
	cout<<"\n"; 
  
    cout<<"Second list is "<<endl; 
    printList (head2);
	cout<<"\n"; 
  
    cout<<"Union list is"<<endl; 
    printList (unin);
	cout<<"\n"; 
  
    return 0; 
} 

