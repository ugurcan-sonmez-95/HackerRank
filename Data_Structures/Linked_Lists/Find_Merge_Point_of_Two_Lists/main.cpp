// Find Merge Point of Two Lists - Solution

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

// Finds the intersection point of two linked lists
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    // Create current pointers and make them point to head of the linked lists
    SinglyLinkedListNode *curr1 = head1, *curr2 = head2;
    // Traverse both lists and stop when the data of current pointers are equal
    while (curr1 != curr2) {
        if (curr1->next == nullptr)
            curr1 = head2;
        else
            curr1 = curr1->next;
        if (curr2->next == nullptr)
            curr2 = head1;
        else
            curr2 = curr2->next;
    }
    return curr1->data;
    delete curr1;
    delete curr2;
}

int main() {
    int testCount;
    std::cin >> testCount;
    for (int i = 0; i < testCount; i++) {
        int index;
        std::cin >> index;
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
        SinglyLinkedListNode *ptr1 = llist1->head;
      	SinglyLinkedListNode *ptr2 = llist2->head;
        for (int i = 0; i < llist1_size; i++) {
            if (i < index)
          		ptr1 = ptr1->next;
        }
      	for (int i = 0; i < llist2_size; i++) {
          	if (i != llist2_size-1) 
          		ptr2 = ptr2->next;
        }
      	ptr2->next = ptr1;
        int result = findMergeNode(llist1->head, llist2->head);
        std::cout << result << '\n';
        delete ptr1;
        delete ptr2;
    }
    return 0;
}