// Inserting a Node Into a Sorted Doubly Linked List - Solution

#include <iostream>
#include <memory>

class DoublyLinkedListNode {
    public:
        int data;
        DoublyLinkedListNode *next;
        DoublyLinkedListNode *prev;
        DoublyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

class DoublyLinkedList {
    public:
        DoublyLinkedListNode *head;
        DoublyLinkedListNode *tail;
        DoublyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }
        void insert_node(int node_data) {
            DoublyLinkedListNode* node = new DoublyLinkedListNode(node_data);
            if (!this->head) 
                this->head = node;
            else {
                this->tail->next = node;
                node->prev = this->tail;
            }
            this->tail = node;
        }
};

void print_doubly_linked_list(DoublyLinkedListNode* node) {
    while (node) {
        std::cout << node->data << " ";
        node = node->next;
    }
}

void free_doubly_linked_list(DoublyLinkedListNode* node) {
    while (node) {
        DoublyLinkedListNode* temp = node;
        node = node->next;
        delete temp;
    }
}

// Inserts a node into a sorted doubly linked list
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, const int data) {
    DoublyLinkedListNode *cur = new DoublyLinkedListNode(data);
    // Check whether the linked list is empty
    if (head == nullptr) 
        return cur;
    // Compare data and the data of head 
    else if (head->data <= data) {
        head->next = sortedInsert(head->next, data);
        head->next->prev = head;
        cur = head;
    }
    // Put data in the linked list when the data of head is greater than data
    else {
        cur->next = head;
        cur->prev = head->prev;
        head->prev = cur;
    }
    return cur;
}

int main() {
    int testCount;
    std::cin >> testCount;
    for (int i = 0; i < testCount; i++) {
        std::unique_ptr<DoublyLinkedList> llist = std::make_unique<DoublyLinkedList>();
        int llist_size;
        std::cin >> llist_size;
        for (int i = 0; i < llist_size; i++) {
            int llist_item;
            std::cin >> llist_item;
            llist->insert_node(llist_item);
        }
        int data;
        std::cin >> data;
        DoublyLinkedListNode* llist1 = sortedInsert(llist->head, data);
        print_doubly_linked_list(llist1);
        free_doubly_linked_list(llist1);
    }
    return 0;
}