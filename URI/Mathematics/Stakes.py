from math import gcd

while True :
	try :
		XY = [int(x) for x in input().split()]
		if XY[0] == XY[1] :
			print(4)
		else :
			FPB = gcd(XY[0], XY[1])
			print((XY[0] // FPB) * 2 + (XY[1] // FPB) * 2)
	except EOFError :
		pass