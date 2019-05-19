while True :
	N = int(input())
	if N == 0 :
		break
	Bowl = [int(x) for x in input().split()]
	
	Step = 0
	
	for i in reversed(Bowl) :
		Step = Step * 2 + i
		
	print(Step)
	
"""
2		Output : 107
67 20

2		Output : 135
109 13

1		Output : 243
243

4		Output : 4258
94 832 367 129

10		Output : 3069
3 3 3 3 3 3 3 3 3 3

=====================
5		Output : 129
1 2 3 4 5 -> Total : 15

Step :

6 7 8 9 0, Menambah langkah Arr[i] * N-i, dan menjalakankan Arr[i] langkah (5 Step) -> 5
15 16 17 0 0, Menambah langkah Arr[i] * N-i, dan menjalakankan Arr[i] langkah (9 Step) [Nilai Arr[i] sudah ditambah dari iterasi sebelumnya]  -> 5 + 4
32 33 0 0 0, Menambah langkah Arr[i] * N-i, dan menjalakankan Arr[i] langkah (17 Step) [Nilai Arr[i] sudah ditambah dari iterasi sebelumnya]  -> 5 + 4 + 832 33 0 0, Menambah langkah Arr[i] * N-i, dan menjalakankan Arr[i] langkah (17 Step) [Nilai Arr[i] sudah ditambah dari iterasi sebelumnya]  -> 5 + 4 + 8
65 0 0 0 0, Menambah langkah Arr[i] * N-i, dan menjalakankan Arr[i] langkah (33 Step) [Nilai Arr[i] sudah ditambah dari iterasi sebelumnya]  -> 5 + 4 + 832 33 0 0, Menambah langkah Arr[i] * N-i, dan menjalakankan Arr[i] langkah (17 Step) [Nilai Arr[i] sudah ditambah dari iterasi sebelumnya]  -> 5 + 4 + 8 + 16
0 0 0 0 0, Menambah langkah Arr[i] * N-i, dan menjalakankan Arr[i] langkah (65 Step) [Nilai Arr[i] sudah ditambah dari iterasi sebelumnya]  -> 5 + 4 + 832 33 0 0, Menambah langkah Arr[i] * N-i, dan menjalakankan Arr[i] langkah (17 Step) [Nilai Arr[i] sudah ditambah dari iterasi sebelumnya]  -> 5 + 4 + 8 + 16 + 32


1 2 3 4 5
Bonus : 0 -> 5 -> 9 
Answer : 0 + 5 + 9 + 12 + 14 + 15
"""