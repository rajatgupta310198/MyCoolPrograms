# Level handling class
# rg_310198

class Level:
    def __init__(self):
        self.lev = 1

    def upLevel(self):
        self.lev = self.lev+1;

    def getLevel(self):
        return self.lev

    def levelOld(self,score):
        self.lev = int(score) +1

