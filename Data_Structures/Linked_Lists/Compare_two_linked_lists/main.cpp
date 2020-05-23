// Compare two linked lists - Solution

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

// Compares two linked lists
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    // Traverse both linked lists and stop if there is a mismatching or when reaching the end of a linked list
    while (head1 && head2 && head1->data == head2->data) {
        head1 = head1->next;
        head2 = head2->next;
    }
    // Check whether the linked lists are equal
    return (head1 == head2);
}

int main() {
    int tests;
    std::cin >> tests;
    for (int tests_itr = 0; tests_itr < tests; tests_itr++) {
        std::unique_ptr<SinglyLinkedList> llist1 = std::make_unique<SinglyLinkedList>();
        int llist1_count;
        std::cin >> llist1_count;
        for (int i = 0; i < llist1_count; i++) {
            int llist1_item;
            std::cin >> llist1_item;
            llist1->insert_node(llist1_item);
        }
        std::unique_ptr<SinglyLinkedList> llist2 = std::make_unique<SinglyLinkedList>();
        int llist2_count;
        std::cin >> llist2_count;
        for (int i = 0; i < llist2_count; i++) {
            int llist2_item;
            std::cin >> llist2_item;
            llist2->insert_node(llist2_item);
        }
        bool result = compare_lists(llist1->head, llist2->head);
        std::cout << result << '\n';
    }
    return 0;
}