from collections import deque

N = int(input())

Multiple = deque()

i = 1
while i*i <= N :
	if N % i == 0 :
		print(i)
		
		if(i**2 != N) :
			Multiple.appendleft(N//i)
	i += 1
	
while Multiple :
	print(Multiple.popleft())
