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
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    // Check whether the linked list is empty
    if (head == nullptr) {
        DoublyLinkedListNode *cur = new DoublyLinkedListNode(data);
        return cur;
    }
    // Compare data and the data of head 
    if (head->data <= data) {
        head->next = sortedInsert(head->next, data);
        head->next->prev = head;
    }
    // Put data in the linked list when the data of head is greater than data
    else if (head->data > data) {
        DoublyLinkedListNode *cur = new DoublyLinkedListNode(data);
        cur->next = head;
        cur->prev = head->prev;
        head->prev = cur;
        head = cur;
    }
    return head;
}

int main() {
    int t;
    std::cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        std::unique_ptr<DoublyLinkedList> llist = std::make_unique<DoublyLinkedList>();
        int llist_count;
        std::cin >> llist_count;
        for (int i = 0; i < llist_count; i++) {
            int llist_item;
            std::cin >> llist_item;
            llist->insert_node(llist_item);
        }
        int data;
        std::cin >> data;
        DoublyLinkedListNode* llist1 = sortedInsert(llist->head, data);
        print_doubly_linked_list(llist1);
        free_doubly_linked_list(llist1);
        delete llist1;
    }
    return 0;
}