import os
import sys
if not os.path.exists(os.getcwd()+'/Player'):
    os.mkdir('Player')

class Player:
    def __init__(self,name):     # new player
        self.name = name;
        self.score = 0
        f = open('Player/'+name+'.txt','w')
        f.write(name+'\t'+str(self.score))
        f.close()

    def oldPlayer(self,name):                   # load old Player
        if not os.path.exists(os.getcwd()+'/Player/'+name):
            print('Player not exists\n Create new profile')
            return 1;

    def modifyPlayer(self,name,score):    # modify records of Player
        f = open('Player/'+name+'.txt','w')
        f.write(self.name+'\t'+str(score))
        f.close()
