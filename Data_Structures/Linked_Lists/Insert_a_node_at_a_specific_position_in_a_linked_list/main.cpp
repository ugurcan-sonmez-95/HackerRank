// Insert a node at a specific position in a linked list - Solution

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
        std::cout << node->data << " ";
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    new_node->data = data;
    if (head == nullptr)
        return new_node;
    else if (position == 0) {
        new_node->next = head;
        return new_node;
    }
    SinglyLinkedListNode *prev = head;
    while (position-1 > 0) {
        prev = prev->next;
        position--;
    }
    new_node->next = prev->next;
    prev->next = new_node;
    return head;
    delete new_node;
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
    int data;
    std::cin >> data;
    int position;
    std::cin >> position;
    SinglyLinkedListNode* llist_head = insertNodeAtPosition(llist->head, data, position);
    print_singly_linked_list(llist_head);
    free_singly_linked_list(llist_head);

    return 0;
}