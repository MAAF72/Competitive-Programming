import re

Words = []
while True :
	try :
		Words = Words + re.findall(r"\b[^\d\W]+\b", input().lower())
	except EOFError :
		break
		
for i in sorted(set(Words)) :
	print(i) 