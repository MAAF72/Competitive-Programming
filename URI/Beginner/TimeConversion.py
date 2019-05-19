N = int(input())
H = N // 3600
N = N % 3600
M = N // 60
N = N % 60
print("{}:{}:{}".format(H, M, N))