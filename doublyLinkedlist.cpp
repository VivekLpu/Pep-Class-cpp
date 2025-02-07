#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        if (head != nullptr) {
            head->prev = newNode;
        }
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteNode(int val) {
        Node* temp = head;
        while (temp != nullptr && temp->data != val) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Node with value " << val << " not found.\n";
            return;
        }
        if (temp->prev != nullptr) {
            temp->prev->next = temp->next;
        } else {
            head = temp->next;
        }
        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }
        delete temp;
    }

    void traverse() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtHead(10);
    dll.insertAtHead(20);
    dll.insertAtTail(30);
    dll.traverse(); 

    dll.deleteNode(10);
    dll.traverse(); 

    dll.deleteNode(40); 

    return 0;
}