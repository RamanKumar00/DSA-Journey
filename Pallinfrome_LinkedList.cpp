#include <iostream>
#include <stack>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {}
};

class solution {
public:
    bool isPalindrome(node* head) {
        stack<int> s;
        node* temp = head;

        for(temp = head; temp != nullptr; temp = temp->next) {
            s.push(temp->data); 
        }

        temp = head;

        while (temp != nullptr) {
            if (temp->data != s.top()) {
                return false; 
            }
            s.pop();
            temp = temp->next;
        }

        return true; 
    }
};  

int main() {
    node* head = new node(1);   
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(2);
    head->next->next->next->next = new node(1);
    
    solution sol;
    if (sol.isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}
