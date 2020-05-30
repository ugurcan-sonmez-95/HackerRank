// Reverse a doubly linked list - Solution

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

// Reverses a doubly linked list
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode *tmp = nullptr, *cur = head;
    // Swap previous and next nodes for all of the nodes
    while (cur != nullptr) {
        tmp = cur->prev;
        cur->prev = cur->next;
        cur->next = tmp;
        cur = cur->prev;
    } 
    // Check whether the linked list is empty or the linked list has one node
    if (tmp != nullptr)
        head = tmp->prev;
    return head;
    delete tmp;
    delete cur;
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
        DoublyLinkedListNode *llist1 = reverse(llist->head);
        print_doubly_linked_list(llist1);
        free_doubly_linked_list(llist1);
        delete llist1; 
    }
    return 0;
}