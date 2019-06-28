N = 1000001

Prime = [True] * N
Prime[0] = Prime[1] = False

def SieveOfEratosthenes(N) :
	P = 2
	while P * P < N :
		if Prime[P] :
			for i in range(P * P, N, P) :
				Prime[i] = False
		P += 1

SieveOfEratosthenes(N)

SubRes = [0] * N

for i in range(N) :
	if Prime[i] :
		if (i > 1 and Prime[i-2]) or (i + 2 < N and Prime[i+2]) :
			SubRes[i] = 1
			
	if i :
		SubRes[i] += SubRes[i - 1]

Q = int(input())

for _ in range(Q) :
	X, Y = map(int, input().split())
	
	if X > Y :
		X, Y = Y, X #Swap, so Y is always higher than X, Y > X
	
	#Result = sum(1 for i in range(X, Y+1) if (Prime[i] == True and (Prime[i+2] == True or (i >= 2 and Prime[i-2] == True))))
	print(SubRes[Y] - SubRes[X-1])