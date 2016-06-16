import os
import sys
if not os.path.exists(os.getcwd()+'/Player'):
    os.mkdir('Player')

class Player:
    def __init__(self,name):     # new player
        self.name = name;
        self.score = 0

    def getScore(self):
        return self.score

    def oldPlayer(self,name):                   # load old Player
        # if not os.path.exists(os.getcwd()+'/Player/'+name):
        #     print('Player not exists\n Create new profile')
        #     return -1;
        #
        # else:
        f = open('Player/'+self.name+'.txt','r')
        x = f.read()
        for i in x.split():
            if i.isdigit():
                return i

    def modifyPlayer(self,score):    # modify records of Player
        f = open('Player/'+self.name+'.txt','w')
        f.write(self.name+'\t'+str(score))
        f.close()
