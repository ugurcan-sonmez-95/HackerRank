### Insert a node at a specific position in a linked list - Solution

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

# Inserts node at a specific position in a linked list
def insertNodeAtPosition(head, data, position):
    new_node = SinglyLinkedListNode(data)
    new_node.data = data
    # Check whether the linked list is empty
    if (head == None):
        return new_node
    # If we insert a node at the head
    elif (position == 0):
        new_node.next = head
        return new_node
    prev = head
    # Finds the previous node of the position that will we insert into
    while ((position-1) > 0):
        prev = prev.next
        position -= 1
    # Make new_node's next as prev's next and assign new_node to prev's next
    new_node.next = prev.next
    prev.next = new_node
    return head

llist_size = int(input())
llist = SinglyLinkedList()
for _ in range(llist_size):
    llist_item = int(input())
    llist.insert_node(llist_item)
data = int(input())
position = int(input())
llist_head = insertNodeAtPosition(llist.head, data, position)
print_singly_linked_list(llist_head)