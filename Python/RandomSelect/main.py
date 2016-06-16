import os
import sys
import random

from level import Level
from player import Player

print(sys.platform)

def getRandom(rang):
	return random.randint(0,rang)

print("1.New Player\n2.Load game\n3.Exit")
i = int(input())


if i==1:
	name = input("Enter name :")
	pl = Player(name)
	score = pl.getScore()
	rang = Level()

if i==2:
	name = input("Enter name :")
	pl = Player(name)
	score = int(pl.oldPlayer(name))
	rang = Level()
	rang.levelOld(score)


t = 1
while t and rang.getLevel() <20:
	j = int(getRandom(rang.getLevel()))
	print("\t\t ",j)
	i = int(input('Enter no.:'))
	if i==j:
		rang.upLevel()
		score = score + 1

	else:
		t=0

if rang==20:
	print("Won\nScore is", score)

else:
	print("Loose\nScore is",score)

pl.modifyPlayer(score)
del pl
del rang
