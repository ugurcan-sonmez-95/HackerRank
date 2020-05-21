// Print in Reverse - Solution

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
        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);
            if (!this->head) 
                this->head = node;
            else 
                this->tail->next = node;
            this->tail = node;
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

// Prints the reversed linked list
void reversePrint(SinglyLinkedListNode* head) {
    // Initialize prev, cur and next
    SinglyLinkedListNode *cur = head, *prev = nullptr, *next = nullptr;
    // Assign cur->next to next
    while (cur != nullptr) {
        next = cur->next;
        // Reverse the point that current node points to
        cur->next = prev;
        // Move prev and cur to the next node
        prev = cur;
        cur = next;
    }
    head = prev;
    print_singly_linked_list(head);
    delete cur;
    delete prev;
    delete next;
}

int main() {
    int tests;
    std::cin >> tests;
    for (int tests_itr = 0; tests_itr < tests; tests_itr++) {
        std::unique_ptr<SinglyLinkedList> llist = std::make_unique<SinglyLinkedList>();
        int llist_count;
        std::cin >> llist_count;
        for (int i = 0; i < llist_count; i++) {
            int llist_item;
            std::cin >> llist_item;
            llist->insert_node(llist_item);
        }
        reversePrint(llist->head);
    }
    return 0;
}