### Delete a Node - Solution

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

# Deletes a node
def deleteNode(head, position):
    # Check whether the linked list is empty
    if head == None:
        return head
    temp = head
    # If head will be removed
    if position == 0:
        head = temp.next
        temp = None
        return head
    # Find previous node of the node that will be deleted
    for _ in range(position-1):
        temp = temp.next
        if temp == None:
            break
    # If the position is more than a number of nodes
    if (temp == None) or (temp.next == None):
        return head
    # temp.next is the node that will be deleted
    next_node = temp.next.next
    temp.next = None
    temp.next = next_node
    return head

llist_size = int(input())
llist = SinglyLinkedList()
for _ in range(llist_size):
    llist_item = int(input())
    llist.insert_node(llist_item)
position = int(input())
llist1 = deleteNode(llist.head, position)
print_singly_linked_list(llist1)