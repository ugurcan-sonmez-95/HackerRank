### Merge two sorted linked lists - Solution

from sys import setrecursionlimit

setrecursionlimit(10000)

class SinglyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    def insert_node(self, node_data):
        node = SinglyLinkedListNode(node_data)
        if not self.head:
            self.head = node
        else:
            self.tail.next = node
        self.tail = node

def print_singly_linked_list(node):
    while (node != None):
        print(node.data, end=' ')
        node = node.next

# Merges two sorted linked lists
def mergeLists(head1, head2):
    # If one of the linked lists is empty, return the other one
    if not head1:
        return head2
    if not head2:
        return head1
    # Start with the linked list whose data is less than the other
    if head1.data < head2.data:
        temp = head1
        temp.next = mergeLists(head1.next, head2)
    else:
        temp = head2
        temp.next = mergeLists(head1, head2.next)
    return temp

test_count = int(input())
for _ in range(test_count):
    llist1_size = int(input())
    llist1 = SinglyLinkedList()
    for _ in range(llist1_size):
        llist1_item = int(input())
        llist1.insert_node(llist1_item)
    llist2_size = int(input())
    llist2 = SinglyLinkedList()
    for _ in range(llist2_size):
        llist2_item = int(input())
        llist2.insert_node(llist2_item)
    llist3 = mergeLists(llist1.head, llist2.head)
    print_singly_linked_list(llist3)