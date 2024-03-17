class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def searchInLinkedList(head, k):
    # Your code goes here.
    temp=head
    while(temp!=None):
        if temp.data==k:
            return 1
        temp=temp.next
    return 0