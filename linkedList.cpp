#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) { 
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteNode(int val) {
        if (!head) return;
        
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next && temp->next->data != val) {
            temp = temp->next;
        }

        if (!temp->next) return;

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    
    cout << "Linked List after insertions: ";
    list.display();

    list.deleteNode(20);
    cout << "Linked List after deleting 20: ";
    list.display();

    list.deleteNode(40);
    cout << "Linked List after deleting 40: ";
    list.display();

    return 0;
}
