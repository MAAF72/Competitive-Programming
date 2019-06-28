while True :
	try :
		S, A, B = map(int, input().split())
		if B >= A :
			print("impossivel")
		else :
			print("{0:.2f}".format(S / (A - B)))
	except EOFError :
		break