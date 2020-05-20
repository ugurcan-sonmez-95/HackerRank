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

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    // Assign data to new_node's data
    new_node->data = data;
    // Make new_node's next as head
    new_node->next = head;
    // Make head point to new_node
    head = new_node;
    return head;
}

int main() {
    std::unique_ptr<SinglyLinkedList> llist = std::make_unique<SinglyLinkedList>();
    int llist_count;
    std::cin >> llist_count;
    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        std::cin >> llist_item;    
      	SinglyLinkedListNode* llist_head = insertNodeAtHead(llist->head, llist_item);
        llist->head = llist_head;
    }
    print_singly_linked_list(llist->head);
    free_singly_linked_list(llist->head);

    return 0;
}