#include<iostream>
using namespace std;

struct node{
   int data;
   node *next;
   node *prev;
};

void push(node **head_ref, int newData)
{
    node *newNode = new node();

    newNode->data = newData;
    newNode->next = *head_ref;
    newNode->prev = NULL;

    if(*head_ref != NULL){
        (*head_ref)->prev = newNode;
    }

    *head_ref = newNode;
}

void printList(node *n){
    while(n != NULL){
        cout << n->data << endl;
        n = n->next;
    }
}

int main()
{
    node *head = NULL;

    push(&head,7);
    push(&head,8);
    push(&head,9);

    printList(head);

    return 0;
}