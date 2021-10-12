a = 5
b = 87562155
c = 12
d = 48

res = 0
for i in range(a, b+1):
	if i % c != 0 and i % d != 0:
		res+=1

print(res)
