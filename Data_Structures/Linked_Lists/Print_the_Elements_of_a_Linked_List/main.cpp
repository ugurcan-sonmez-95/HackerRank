// Print the Elements of a Linked List - Solution

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


void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;
        delete temp;
    }
}

// Prints the linked list
void printLinkedList(SinglyLinkedListNode* head) {
    while (head != nullptr) {
        std::cout << head->data << std::endl;
        head = head->next;
    }    
}

int main() {
    std::unique_ptr<SinglyLinkedList> llist = std::make_unique<SinglyLinkedList>();
    int llist_count;
    std::cin >> llist_count;
    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        std::cin >> llist_item;
        llist->insert_node(llist_item);
    }
    printLinkedList(llist->head);

    return 0;
}