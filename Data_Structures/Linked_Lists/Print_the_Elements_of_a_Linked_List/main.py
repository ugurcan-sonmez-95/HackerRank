### Print the Elements of a Linked List - Solution

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

# Prints the linked list
def printLinkedList(head):
    while (head != None):
        print(head.data)
        head = head.next

llist_size = int(input())
llist = SinglyLinkedList()
for _ in range(llist_size):
    llist_item = int(input())
    llist.insert_node(llist_item)
printLinkedList(llist.head)