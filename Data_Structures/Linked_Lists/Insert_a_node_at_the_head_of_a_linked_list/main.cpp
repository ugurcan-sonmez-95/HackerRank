// Insert a node at the head of a linked list - Solution

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
        SinglyLinkedListNode *tail;
        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
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

// Inserts a node at the head of the linked list
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, const int data) {
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    // Assign data to new_node's data
    new_node->data = data;
    // Make new_node's next as head
    new_node->next = head;
    // Return new_node
    return new_node;
}

int main() {
    SinglyLinkedList* llist = new SinglyLinkedList();
    int llist_size;
    std::cin >> llist_size;
    for (int i = 0; i < llist_size; i++) {
        int llist_item;
        std::cin >> llist_item;    
      	SinglyLinkedListNode* llist_head = insertNodeAtHead(llist->head, llist_item);
        llist->head = llist_head;
        delete llist_head;
    }
    print_singly_linked_list(llist->head);
    free_singly_linked_list(llist->head);

    return 0;
}