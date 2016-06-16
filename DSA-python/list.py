 # linked list

import os

os.system("clear")

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None



class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self,data):
        t = Node(data)
        t.next = self.head
        self.head = t

    def disp(self):
        t = self.head
        while t:
            print(t.data,)
            t=t.next


if __name__ == '__main__':
    my = LinkedList()
    my.insert(1)
    my.insert(2)
    my.insert(3)
    my.insert(4)
    my.insert(5)
    my.disp()
