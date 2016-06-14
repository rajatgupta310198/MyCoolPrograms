import math
import random

i = 2.8

print(type(i))

print(math.floor(i))  # Closest number below value

i = -2.2

print(math.floor(i))  # Closest number below value

print(math.trunc(2.5))   # make toward 0

print(math.trunc(-2.4))


print(2**4)  # will print 2^4

print('2'*4) # wil print 2222

# bitwise operations

# l shift
x = 1;
print(x<<2)  # 1 in binary 0001 so 1<<2 will be 0100 = 4 in deci shifted 1 bit to left side

print(x<<3) # 1 in binary 0001 so 1<<3 will be 1000 = 8 in deci shifted 1 bit to left side
# r shift
x = 4
print(x>>1)  # 4 in binary is 0100 so 4>>1 will be 0010 = 2

print(x>>2)  # 4 in binary in 0100 so 4>>2 will be 0001 = 1

print(hex(55))  # hex value of 55

print(oct(55))  ## oct value of 55

print(bin(55))  # bin value of 55

deg = float(input("Enter degree :"))

angle = deg*math.pi/180

print("Sine of the degree is ",math.sin(angle))  # compute sine value

print(round(2.65),round(2.02),round(-2.22),round(-2.65)) # rounds no. apart from considering sign

print(math.sqrt(64))  

# use of pow function

print(math.pow(64,5))

print(math.pow(64,.5))

print(math.pow(64,1/5))

# random 

l = ['apple','grapes','mango','banana','papaya']  

o = random.choice(l)  # choose a random item from list l

print(o)

print(l)

random.shuffle(l)  # shuffle items in list l

print(l)

x = random.random()  # return any random number

print(x)

x = random.randint(1,5)  # return only integer random number in range 1-5

print(x)

# fractions

from fractions import Fraction   # fractions in python

y = Fraction(1,5)    # make y object 1/5 using class Fraction

print(y)

x = Fraction(2/3)

z = x-y

print(z)  

# Sets

