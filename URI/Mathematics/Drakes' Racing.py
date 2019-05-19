def GetWinnerCount(N) :
	#Kalau ada 4 pemain seharusnya dibikin 2 - 2, bukan 3 - 1
	#Kalau ada 3K+1 pemain :
		#7 pemain -> 3 - 2 - 2, bukan 3 - 3 - 1
		#10 pemain -> 3 - 3 - 2 - 2, bukan 3 - 3 - 3 - 1
		#13 pemain -> 3 - 3 - 3 - 2 - 2, bukan 3 - 3 - 3 - 3 - 1
	if N == 1 :
		return 0
	elif N in (2, 3) :
		return 1
	else :	
		if (N-1) % 3 == 0 :
		
			G3 = (N // 3) - 1
		else :
			G3 = N // 3
		
		G2 = (N - G3 * 3) // 2
		return G3 + G2 + GetWinnerCount(G3 + G2)
	
		
	
while True :
	N = int(input())
	
	if N == 0 :
		break
	
	print(GetWinnerCount(N))
	