// Insert a Node at the Tail of a Linked List - Solution

#include <iostream>
#include <memory>

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;
        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedList() {
            this->head = nullptr;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        std::cout << node->data << '\n';
        node = node->next;
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;
        delete temp;
    }
}

// Inserts a node at the end of the linked list
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode *head, const int data) {
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *last = head;
    // Assign data to the new_node's data
    new_node->data = data;
    // Make new_node the last node
    new_node->next = nullptr;
    // If the linked list is empty, return new_node
    if (head == nullptr) 
        return new_node;
    // Otherwise, traverse until the last node
    while (last->next != nullptr)
        last = last->next;
    // Assign new_node to last->next
    last->next = new_node;
    new_node = head;
    return new_node; 
}

int main() {
    SinglyLinkedList* llist = new SinglyLinkedList();
    int llist_size;
    std::cin >> llist_size;
    for (int i = 0; i < llist_size; i++) {
        int llist_item;
        std::cin >> llist_item;
      	SinglyLinkedListNode* llist_head = insertNodeAtTail(llist->head, llist_item);
        llist->head = llist_head;
        delete llist_head;
    }
    print_singly_linked_list(llist->head);
    free_singly_linked_list(llist->head);

    return 0;
}