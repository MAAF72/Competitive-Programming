Days = int(input())
print(Days//365, "ano(s)")
Days %= 365
print(Days//30, "mes(es)")
Days %= 30
print(Days, "dia(s)")