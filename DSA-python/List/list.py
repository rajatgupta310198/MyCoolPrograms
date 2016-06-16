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

    def deleteBeg(self):
        t = self.head
        self.head = t.next
        del t

    def insertAfter(self,data,key):
        if self.head.data == key:
            t = Node(data)
            t.next = self.head.next
            self.head.next = t

        else:
            t = self.head
            while t.next is not None and t.data != key:
                t=t.next

            if not t:
                print("Not found key provided")

            if t.data == key:
                p = Node(data)
                p.next = t.next
                t.next = p


    def insertEnd(self,data):
        t = self.head
        while t.next is not None:
            t=t.next

        if t.next == None:
            p = Node(data)
            p.next = None
            t.next = p

    def deleteEnd(self):
        t = self.head
        while t.next.next is not None:
            t=t.next

        if t.next.next is None:
            p = t.next
            t.next = p.next
            del p


    def deleteAny(self,key):
        if self.head.data == key:
            deleteBeg()

        else:
            t = self.head
            while t.next is not None and t.data is not key:
                p = t
                t = t.next

            if t.next is None:
                print("No match found !")

            if t.data == key:
                p.next = t.next
                del t



    def disp(self):
        t = self.head
        while t:
            print (t.data)
            t=t.next
