### Compare two linked lists - Solution

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

# Compares two linked lists
def compareLists(head1, head2):
    # Traverse both linked lists and stop whether there is a mismatching or when reaching the end of a linked list
    while (head1 and head2 and (head1.data == head2.data)):
        head1 = head1.next
        head2 = head2.next
    # Check whether the linked lists are equal
    check_equal = (head1 == head2)
    return check_equal

test_count = int(input())
for _ in range(test_count):
    llist1_size = int(input())
    llist1 = SinglyLinkedList()
    for _ in range(llist1_size):
        llist1_item = int(input())
        llist1.insert_node(llist1_item)
    llist2_size = int(input())
    llist2 = SinglyLinkedList()
    for _ in range(llist2_size):
        llist2_item = int(input())
        llist2.insert_node(llist2_item)
    result = compareLists(llist1.head, llist2.head)
    print(result, sep='\n')