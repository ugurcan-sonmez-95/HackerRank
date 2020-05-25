// Get Node Value - Solution

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

// Gets the node value at a specific position
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode *main_ptr = head;
    SinglyLinkedListNode *ref_ptr = head;
    // Move ref_ptr to the next node until the count equals to positionFromTail
    for (int i{}; i < positionFromTail; i++)
        ref_ptr = ref_ptr->next;
    // Move both pointers to next nodes until next node of ref_ptr is at the end
    while (ref_ptr->next != nullptr) {
        main_ptr = main_ptr->next;
        ref_ptr = ref_ptr->next;
    }   
    return main_ptr->data;
    delete main_ptr;
    delete ref_ptr;
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
        int position; 
        std::cin >> position;
        int result = getNode(llist->head, position);
        std::cout << result << '\n';
    }
    return 0;
}