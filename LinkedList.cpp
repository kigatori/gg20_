#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::addNode(int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertAfter(int m, int n) {
    Node* current = head;
    while (current != nullptr) {
        if (current->value == m) {
            Node* newNode = new Node;
            newNode->value = n;
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }
    throw std::runtime_error("Value not found in the linked list");
}

void LinkedList::printList() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}
