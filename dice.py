#!/usr/bin/python3

import random
roll_1 = random.randint(1,6)
roll_2 = random.randint(1,6)

if roll_1 != 6 or (roll_2 != 5 and roll_2!= 6): 
	print("Dau cu zaru", roll_1, roll_2)
else:
	if roll_2 == 5:
		print("Dau cu zaru 6 5 n-am nevoie de servici")
	else:
		print("Dau cu zaru 6 6 ca mine nu se mai naste")
