# stack linked list implementation
# Rajat Gupta

import time
import os

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None


class Stack:
    def __init__(self):
        self.Top = None

    def push(self,data):
        t = Node(data)
        t.next = self.Top
        self.Top = t

    def pop(self):
        t = self.Top
        x = t.data
        self.Top = t.next
        del t
        return x

    def disp(self):
        t = self.Top
        while t:
            print(t.data)
            t = t.next


if __name__ == '__main__':
    S = Stack()
    S.push(1)
    S.push(2)
    S.push(3)
    S.push(4)
    S.push(5)
    S.disp()
    print(S.pop())
