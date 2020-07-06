### Inserting a Node Into a Sorted Doubly Linked List - Solution 

class DoublyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None
        self.prev = None

class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    def insert_node(self, node_data):
        node = DoublyLinkedListNode(node_data)
        if not self.head:
            self.head = node
        else:
            self.tail.next = node
            node.prev = self.tail
        self.tail = node

def print_doubly_linked_list(node):
    while node:
        print(node.data, sep=' ')
        node = node.next

# Inserts a node into a sorted doubly linked list
def sortedInsert(head, data):
    # Check whether the linked list is empty
    if head == None:
        cur = DoublyLinkedListNode(data)
        return cur
    # Compare data and head data 
    elif head.data <= data:
        head.next = sortedInsert(head.next, data)
        head.next.prev = head
    # Put data in the linked list when head data is greater than data
    else:
        cur = DoublyLinkedListNode(data)
        cur.next = head
        cur.prev = head.prev
        head.prev = cur
        head = cur
    return head

test_count = int(input())
for _ in range(test_count):
    llist_size = int(input())
    llist = DoublyLinkedList()
    for _ in range(llist_size):
        llist_item = int(input())
        llist.insert_node(llist_item)
    data = int(input())
    llist1 = sortedInsert(llist.head, data)
    print_doubly_linked_list(llist1)