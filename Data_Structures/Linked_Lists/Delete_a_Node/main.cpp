// Delete a Node - Solution

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
            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }
            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        std::cout << node->data << " ";
        node = node->next;
    }
}

// Deletes a node
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, const int position) {
    // If the linked list is empty
    if (head == nullptr)
        return head;
    SinglyLinkedListNode *tmp = head;
    // If head will be removed
    if (position == 0) {
        head = tmp->next;
        delete tmp;
        return head;
    }
    // Find previous node of the node that will be deleted
    for (int i{}; tmp != nullptr && i < position-1; i++)
        tmp = tmp->next;
    // If the position is more than a number of nodes
    if (tmp == nullptr || tmp->next == nullptr)
        return head;
    // tmp->next is the node that will be deleted
    SinglyLinkedListNode *temp = tmp->next->next;
    delete tmp->next;
    tmp->next = temp;
    return head;
}

int main() {
    std::unique_ptr<SinglyLinkedList> llist = std::make_unique<SinglyLinkedList>();
    int llist_size;
    std::cin >> llist_size;
    for (int i = 0; i < llist_size; i++) {
        int llist_item;
        std::cin >> llist_item;
        llist->insert_node(llist_item);
    }
    int position;
    std::cin >> position;
    SinglyLinkedListNode* llist1 = deleteNode(llist->head, position);
    print_singly_linked_list(llist1);

    return 0;
}