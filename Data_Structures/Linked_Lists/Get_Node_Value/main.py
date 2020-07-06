### Get Node Value - Solution

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
        print(node.data, sep='\n')
        node = node.next

# Gets the node value at a specific position
def getNode(head, position_from_tail):
    main, ref = head, head
    # Move ref to the next node until the count equals to position_from_tail
    for _ in range(position_from_tail):
        ref = ref.next
    # Move main and ref to next nodes until next node of ref is at the end
    while ref.next != None:
        main = main.next
        ref = ref.next
    return main.data

test_count = int(input())
for _ in range(test_count):
    llist_size = int(input())
    llist = SinglyLinkedList()
    for _ in range(llist_size):
        llist_item = int(input())
        llist.insert_node(llist_item)
    position = int(input())
    result = getNode(llist.head, position)
    print(result)