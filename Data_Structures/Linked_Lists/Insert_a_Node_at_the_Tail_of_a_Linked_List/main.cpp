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
        std::cout << node->data << std::endl;
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
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *last = head;
    // Assign data to the new_node's data
    new_node->data = data;
    // Make new_node the last node
    new_node->next = nullptr;
    // If the linked list is empty, make the head as new_node
    if (head == nullptr) {
        head = new_node;
        return head;
    }
    // Otherwise, traverse until the last node
    while (last->next != nullptr)
        last = last->next;
    // Assign new_node to last->next
    last->next = new_node;
    return head; 
}

int main() {
    std::unique_ptr<SinglyLinkedList> llist = std::make_unique<SinglyLinkedList>();
    int llist_count;
    std::cin >> llist_count;
    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        std::cin >> llist_item;
      	SinglyLinkedListNode* llist_head = insertNodeAtTail(llist->head, llist_item);
        llist->head = llist_head;
    }
    print_singly_linked_list(llist->head);
    free_singly_linked_list(llist->head);

    return 0;
}