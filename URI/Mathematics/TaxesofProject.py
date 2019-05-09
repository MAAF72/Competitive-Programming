i = 0
while True :
	try :
		i += 1
		if(i != 1) :
			print()
		Val = [float(X) for X in input().split()] 
		print("Projeto ", i, ":", sep="") #sep adalah separator, berisi character yg memisahkan antar argument
		print("Percentual dos juros da aplicacao:", "{0:.2f}".format(((Val[1] / Val[0]) - 1) * 100), "%")
	except EOFError :
		break