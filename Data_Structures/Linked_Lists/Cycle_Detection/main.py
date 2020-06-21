### Cycle Detection - Solution

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

def print_singly_linked_list(node, sep, fptr):
    while (node != None):
        print(node.data)
        node = node.next

# Checks whether there is a cycle in the linked list
def hasCycle(head):
    slow, fast = head, head
    # While 'slow' goes one step forward, 'fast' goes two
    # We compare them
    # If there is no equality and no cycle, we will get 0, else 1
    while (slow and fast and fast.next):
        slow = slow.next
        fast = fast.next.next
        if (slow == fast):
            return True
    return False

test_count = int(input())
for _ in range(test_count):
    index = int(input())
    llist_size = int(input())
    llist = SinglyLinkedList()
    for _ in range(llist_size):
        llist_item = int(input())
        llist.insert_node(llist_item)
    extra = SinglyLinkedListNode(-1)
    temp = llist.head
    for i in range(llist_size):
        if (i == index):
            extra = temp
        if (i != llist_size-1):
            temp = temp.next
    temp.next = extra
    result = hasCycle(llist.head)
    print(result)