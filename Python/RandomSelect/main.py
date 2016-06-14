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
	name = input("Name :")
if i==2:
	name = input("Name :")
pl = Player(name)

t = 1
#rang = level.Level()
rang = Level()
score = 0
while t and rang.getLevel() <20:
	i = int(input('Enter no.:'))
	if i==getRandom(rang.getLevel()):
		rang.upLevel()
		score = score + 1

	else:
		t=0


if rang==20:
	print("Won\nScore is", score)

else:
	print("Loose\nScore is",score)


pl.modifyPlayer(name,score)

del pl
