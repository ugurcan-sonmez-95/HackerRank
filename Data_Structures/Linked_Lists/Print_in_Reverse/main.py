### Print in Reverse - Solution

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
        print(node.data)
        node = node.next

# Reverses the linked list
def reversePrint(head):
    cur_node, prev_node, next_node = head, None, None
    # Assign current node's next to next_node
    while (cur_node != None):
        next_node = cur_node.next
        # Reverse the point that current node points to
        cur_node.next = prev_node
        # Move previous node and current node to the next node
        prev_node = cur_node
        cur_node = next_node
    head = prev_node
    print_singly_linked_list(head)

test_count = int(input())
for _ in range(test_count):
    llist_size = int(input())
    llist = SinglyLinkedList()
    for _ in range(llist_size):
        llist_item = int(input())
        llist.insert_node(llist_item)
    reversePrint(llist.head)