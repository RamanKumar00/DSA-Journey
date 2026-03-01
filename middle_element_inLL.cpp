#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {}
};

void printmiddle(node* head) {
    node* slow = head;
    node* fast = head;

    if (head != NULL) {
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;       
        }
        cout << "The middle element is: " << slow->data << endl;
    }
}

int main() {
   
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    printmiddle(head);

    return 0;
}