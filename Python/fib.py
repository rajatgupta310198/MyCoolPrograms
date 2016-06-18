# faster algorithm for fibonacci number

import os

os.system("clear")

def fiblist(n):
    flist = []
    flist.append(0)
    flist.append(1)
    for i in range(2,n):
        flist.append(flist[i-1]+flist[i-2])

    return flist


if __name__ == '__main__':
    n = int(input("Enter upto N. "))
    print(fiblist(n))
