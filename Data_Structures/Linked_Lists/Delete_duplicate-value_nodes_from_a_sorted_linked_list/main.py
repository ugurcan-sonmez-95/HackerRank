### Delete duplicate-value nodes from a sorted linked list - Solution

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
        print(node.data, sep=' ')
        node = node.next

# Deletes duplicate values from a linked list
def removeDuplicates(head):
    cur = head
    # Check whether the linked list is empty
    if (cur == None):
        return head
    # Traverse the linked list and delete duplicates
    while (cur.next != None):
        if (cur.data == cur.next.data):
            temp = cur.next.next
            cur.next = None
            cur.next = temp
        else:
            cur = cur.next
    return head

test_count = int(input())
for _ in range(test_count):
    llist_size = int(input())
    llist = SinglyLinkedList()
    for _ in range(llist_size):
        llist_item = int(input())
        llist.insert_node(llist_item)
    llist1 = removeDuplicates(llist.head)
    print_singly_linked_list(llist1)