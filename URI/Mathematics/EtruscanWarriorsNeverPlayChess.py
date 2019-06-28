#Un = a + (n - 1) * b
#Sn = n * (a + Un) / 2 -> Sn = n * (2*a + (n - 1) * b) / 2
#a = 1, b = 1, n = dicari, Sn = input
#2Sn = n^2 + n -> n^2 + n - 2Sn = 0
#pakai rumus ABC, lalu dibulatkan ke bawah

from math import sqrt, floor

T = int(input())
for _ in range(T) :
	print(floor(-0.5 + sqrt(1 + (8 * int(input())))/2))