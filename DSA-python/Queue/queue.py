# queue in python

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None


class queue:
    def __init__(self):
        self.front = None
        self.rear = None

    def enq(self,data):
        t = Node(data)
        if self.front == None and self.rear == None:
            self.front = self.rear = t

        else:
            self.rear.next = t
            self.rear = t

    def deq(self):
        if self.front is not None:
            t = self.front
            self.front = t.next
            x = t.data

        if self.front is None:
            self.rear = None

        return x

    def disp(self):
        t = self.front
        while t:
            print(t.next)
            t=t.next



if __name__ == '__main__':
    q = queue()
    q.enq(1)
    q.enq(2)
    q.enq(3)
    q.enq(4)
    q.enq(5)
    q.disp()
    print("\n",q.deq())
