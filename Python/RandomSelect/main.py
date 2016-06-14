import os
import sys
import random
import level

print(sys.platform)

def getRandom(rang):
	return random.randint(0,rang)

t = 1
rang = level.Level()
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
