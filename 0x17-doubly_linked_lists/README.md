Doubly Linked List in C Programming
This is a simple implementation of a doubly linked list data structure in C programming language. The doubly linked list is a type of data structure that consists of a group of nodes in which each node contains two pointers, one pointing to the previous node and the other pointing to the next node. This structure provides a more flexible way to traverse the list compared to the singly linked list.

Usage
The implementation of this doubly linked list provides the following functions:

createNode(int data)
This function creates a new node with the given data and returns a pointer to the node.

insertAtBeginning(int data)
This function inserts a new node with the given data at the beginning of the list.

insertAtEnd(int data)
This function inserts a new node with the given data at the end of the list.

insertAtPosition(int data, int position)
This function inserts a new node with the given data at the specified position in the list.

deleteFromBeginning()
This function deletes the first node of the list.

deleteFromEnd()
This function deletes the last node of the list.

deleteFromPosition(int position)
This function deletes the node at the specified position in the list.

display()
This function displays the contents of the list.

getSize()
This function returns the number of nodes in the list.

getHead()
This function returns the pointer to the first node in the list.

getTail()
This function returns the pointer to the last node in the list.
