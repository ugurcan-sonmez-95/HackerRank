### Insert a Node at the Tail of a Linked List - Solution

class SinglyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None

def print_singly_linked_list(node):
    while (node != None):
        print(node.data)
        node = node.next

# Inserts a node at the tail of a linked list
def insertNodeAtTail(head, data):
    new_node = SinglyLinkedListNode(data)
    last = head
    # Assign data to the new_node's data
    new_node.data = data
    # Make new_node the last node
    new_node.next = None
    # If the linked list is empty, make the head as new_node
    if head == None:
        head = new_node
        return head
    # Else traverse until the last node
    while last.next != None:
        last = last.next
    # Assign new_node to last.next
    last.next = new_node
    return head

llist_size = int(input())
llist = SinglyLinkedList()
for i in range(llist_size):
    llist_item = int(input())
    llist_head = insertNodeAtTail(llist.head, llist_item)
    llist.head = llist_head
print_singly_linked_list(llist.head)