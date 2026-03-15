#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

node *push(node *head, int newData){
    node *newNode= new node();
    newNode -> data = newData;
    newNode -> next = head;
    head = newNode;
    return head;
}
void printlist(node *head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
node* reverseList(node* head) {
    node* prev = NULL;
    node* current = head;
    node* next = NULL;

    while (current != NULL) {
        next = current->next; 
        current->next = prev; 
        prev = current;      
        current = next;       
    }
    return prev; 
}
int main()
{
    node *head = NULL;
    head = push(head, 1);
    head = push(head, 2);       
    head = push(head, 3);
    head = push(head, 4);
    head = push(head, 5);
    cout<<"Original list: ";
    printlist(head);

    head = reverseList(head);
    cout<<"Reversed list: ";
    printlist(head);
    return 0;
}