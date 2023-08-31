#include "LinkedList.h"


int main() {
    // Create a linked list and add nodes
    LinkedList list;

    list.addNode(5);
    list.addNode(4);
    list.addNode(3);
    list.addNode(2);
    list.addNode(1);

    // Test printList
    list.printList(); // Expected output: 1 2 3 4 5

    // Test insertAfter
    list.insertAfter(3, 6);
    list.insertAfter(1, 9);

    list.printList(); // Expected output: 1 9 2 3 6 4 5

    // Exception handling test
    try {
        // Try inserting after a value that doesn't exist
        list.insertAfter(10, 7);
    } catch (const std::exception& e) {
        // Print an error message
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
