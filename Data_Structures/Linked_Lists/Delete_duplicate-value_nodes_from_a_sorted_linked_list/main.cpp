// Delete duplicate-value nodes from a sorted linked list - Solution

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

// Deletes duplicate values
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    // Create current pointer and a pointer that will keep the next of next of current node
    SinglyLinkedListNode *cur = head, *tmp;
    // Check whether the linked list is empty
    if (cur == nullptr)
        return head;
    // Traverse the linked list and delete the duplicates
    while (cur->next != nullptr) {
        if (cur->data == cur->next->data) {
            tmp = cur->next->next;
            delete cur->next;
            cur->next = tmp;
        } else
            cur = cur->next;
    }
    return head;
    delete cur;
    delete tmp;
}

int main() {
    int t;
    std::cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        std::unique_ptr<SinglyLinkedList> llist = std::make_unique<SinglyLinkedList>();
        int llist_count;
        std::cin >> llist_count;
        for (int i = 0; i < llist_count; i++) {
            int llist_item;
            std::cin >> llist_item;
            llist->insert_node(llist_item);
        }
        SinglyLinkedListNode *llist1 = removeDuplicates(llist->head);
        print_singly_linked_list(llist1);
        free_singly_linked_list(llist1);
        delete llist1;
    }
    return 0;
}