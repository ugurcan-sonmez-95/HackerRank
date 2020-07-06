### Reverse a doubly linked list - Solution

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
    while (node != None):
        print(node.data, sep=' ')
        node = node.next

# Reverses a doubly linked list
def reverse(head):
    temp, cur = None, head
    # Swap previous and next nodes for all of the nodes
    while cur != None:
        temp = cur.prev
        cur.prev = cur.next
        cur.next = temp
        cur = cur.prev
    # Check whether the linked list is empty or the linked list has one node
    if temp != None:
        head = temp.prev
    return head

test_count = int(input())
for _ in range(test_count):
    llist_size = int(input())
    llist = DoublyLinkedList()
    for _ in range(llist_size):
        llist_item = int(input())
        llist.insert_node(llist_item)
    llist1 = reverse(llist.head)
    print_doubly_linked_list(llist1)