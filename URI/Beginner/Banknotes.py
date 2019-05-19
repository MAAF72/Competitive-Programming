N = int(input())
print(N)
print("{} nota(s) de R$ 100,00".format(N // 100))
N = N % 100
print("{} nota(s) de R$ 50,00".format(N // 50))
N = N % 50
print("{} nota(s) de R$ 20,00".format(N // 20))
N = N % 20
print("{} nota(s) de R$ 10,00".format(N // 10))
N = N % 10
print("{} nota(s) de R$ 5,00".format(N // 5))
N = N % 5
print("{} nota(s) de R$ 2,00".format(N // 2))
N = N % 2
print("{} nota(s) de R$ 1,00".format(N))