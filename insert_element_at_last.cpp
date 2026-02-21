#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void printlist(node *n){
    while(n != NULL){
        cout << n->data << endl;
        n = n->next;
    }
}

node *push(node *head , int newData){
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    return head;
}

void insertafter(node *prev_node, int newData){
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}

void append(node **head_ref, int newData){
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = NULL;

    node *last = *head_ref;
    if(*head_ref == NULL){
        *head_ref = newNode;
        return;
    }
    while(last->next != NULL){
        last = last->next;
    }
    last->next = newNode;
}

int main(){
    node *head = NULL;

    head = push(head ,5);
    head = push(head ,7);

    insertafter(head->next, 88);
    append(&head,90);

    printlist(head);
    return 0;
}