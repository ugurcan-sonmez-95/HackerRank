// Merge two sorted linked lists - Solution

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

// Merges two sorted linked lists
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    // If one of the linked lists is empty, return the other one 
    if (!head1)
        return head2;
    if (!head2)
        return head1;
    // Start with the linked list whose data is less than the other
    if (head1->data < head2->data) {
        head1->next = mergeLists(head1->next, head2);
        return head1;
    }
    head2->next = mergeLists(head1, head2->next);
    return head2;
}

int main() {
    int testCount;
    std::cin >> testCount;
    for (int i = 0; i < testCount; i++) {
        std::unique_ptr<SinglyLinkedList> llist1 = std::make_unique<SinglyLinkedList>();
        int llist1_size;
        std::cin >> llist1_size;
        for (int i = 0; i < llist1_size; i++) {
            int llist1_item;
            std::cin >> llist1_item;
            llist1->insert_node(llist1_item);
        }
        std::unique_ptr<SinglyLinkedList> llist2 = std::make_unique<SinglyLinkedList>();
        int llist2_size;
        std::cin >> llist2_size;
        for (int i = 0; i < llist2_size; i++) {
            int llist2_item;
            std::cin >> llist2_item;
            llist2->insert_node(llist2_item);
        }
        SinglyLinkedListNode *llist3 = mergeLists(llist1->head, llist2->head);
        print_singly_linked_list(llist3);
        free_singly_linked_list(llist3);
        delete llist3;
    }
    return 0;
}