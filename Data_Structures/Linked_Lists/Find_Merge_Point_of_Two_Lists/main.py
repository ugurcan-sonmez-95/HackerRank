# Find Merge Point of Two Lists - Solution

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
    while node:
        print(node.data)
        node = node.next

# Finds the merge point of two linked lists
def findMergeNode(head1, head2):
    cur1, cur2 = head1, head2
    # Traverse both lists. Stop when cur1 and cur2 are equal
    while cur1 != cur2:
        if cur1.next == None:
            cur1 = head2
        else:
            cur1 = cur1.next
        if cur2.next == None:
            cur2 = head1
        else:
            cur2 = cur2.next
    return cur1.data

test_count = int(input())
for _ in range(test_count):
    index = int(input())
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
    ptr1 = llist1.head
    ptr2 = llist2.head
    for i in range(llist1_size):
        if (i < index):
            ptr1 = ptr1.next
    for j in range(llist2_size):
        if (j != llist2_size-1):
            ptr2 = ptr2.next
    ptr2.next = ptr1
    result = findMergeNode(llist1.head, llist2.head)
    print(result)