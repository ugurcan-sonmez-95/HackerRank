### Insert a node at the head of a linked list - Solution

class SinglyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

def print_singly_linked_list(node):
    while (node != None):
        print(node.data)
        node = node.next

# Inserts node at the head of a linked list
def insertNodeAtHead(head, data):
    new_node = SinglyLinkedListNode(data)
    # Assign data to new_node's data
    new_node.data = data
    # Make new_node's next as head
    new_node.next = head
    # Make head point to new_node
    head = new_node
    return head

llist_size = int(input())
llist = SinglyLinkedList()
for _ in range(llist_size):
    llist_item = int(input())
    llist_head = insertNodeAtHead(llist.head, llist_item)
    llist.head = llist_head
print_singly_linked_list(llist.head)