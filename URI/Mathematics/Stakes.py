from math import gcd

while True :
	try :
		Num = input()
		if not Num :
			break
		A, B = map(int, Num.split())
		if A == B :
			print("4")
		else :
			FPB = gcd(A, B)
			print((A // FPB) * 2 + (B // FPB) * 2)
	except EOFError :
		break