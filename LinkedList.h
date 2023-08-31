#include <iostream>

struct Node {
    int value;
    Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList();
    void addNode(int value);
    void insertAfter(int m, int n);
    void printList();
    ~LinkedList();
};
