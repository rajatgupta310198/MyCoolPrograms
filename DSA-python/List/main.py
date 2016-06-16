from list import LinkedList

import time

import os

if __name__ == '__main__':
    my = LinkedList()
    my.insert(1)
    my.insert(2)
    my.insert(3)
    my.insert(5)
    my.insert(7)
    #my.disp()
    my.insertAfter(6,7)
    #my.disp()
    my.insertAfter(4,5)
    #my.disp()
    my.deleteBeg()
    my.insertEnd(0)
    my.disp()
    my.deleteEnd()
    my.disp()
    time.sleep(5)
    os.system("clear")
    my.deleteAny(5)
    my.disp()
