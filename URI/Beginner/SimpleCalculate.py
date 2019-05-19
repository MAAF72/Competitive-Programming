Product1 = input().split()
Product2 = input().split()
print("VALOR A PAGAR: R$ {0:.2f}".format(int(Product1[1]) * float(Product1[2]) + int(Product2[1]) * float(Product2[2])))
