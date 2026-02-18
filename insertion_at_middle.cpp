#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void printlist(node *n){
    while(n != 0){
        cout << n -> data<<endl;
        n = n -> next;    }
}

node *push(node *head, int newData){
    node *newNode = new node();
    newNode -> data = newData;
    newNode -> next = head;
    head = newNode;
    return head;
}
void insertafter(node *prev_node, int newData){
    node *newNode = new node();
    newNode -> data = newData;
    newNode -> next = prev_node -> next;
    prev_node -> next = newNode;
}
int main(){
    node *head = NULL;
    head = push(head ,5);
    head = push(head ,7);

    insertafter(head -> next, 88);

    printlist(head);
    return 0;

}