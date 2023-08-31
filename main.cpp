#include "../gg20_1/LinkedList.h"
#include<iostream>
using namespace std;

void runLinkedListTests() {
    // Test adding nodes
    LinkedList list;

    list.addNode(5);
    list.addNode(4);
    list.addNode(3);
    list.addNode(2);
    list.addNode(1);

    // Test insertAfter
    list.insertAfter(3, 6);
    list.insertAfter(1, 9);

    // Test inserting after a non-existent value
    try {
        list.insertAfter(10, 7); // This should trigger an exception
    } catch (const std::exception& e) {
        // Exception caught, test passed
    }

    // Test inserting at the beginning
    list.insertAfter(5, 10);
    list.printList();

    // Test inserting at the end
    list.insertAfter(4, 11);
    list.printList();

    // Add more tests as needed
}
