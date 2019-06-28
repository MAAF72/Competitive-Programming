while True :
	N = int(input())
	
	if N == 0 :
		break
		
	H = [int(x) for x in input().split()]
	H.append(H[0])
	H.append(H[1])
	Peaks = 0
	for i in range(1, N + 1) :
		if H[i] < H[i - 1] and H[i] < H[i + 1] :
			Peaks += 1
		elif H[i] > H[i - 1] and H[i] > H[i + 1] :
			Peaks += 1
	print(Peaks)