def replace(a):
	for x in l1:
		if x==a[0]:
			i=l1.index(a[0])
			l1[i]=a[1]

def func(a):
	if a[0] in l1:
		replace(a)
		return 
l1=input("enter no:-").split(' ')
l=[]
a=tuple(map(str,input("enter  replace value and replacement value:-").split(' ')))
for i in range(0,len(a),2):
	l.append((a[i],a[i+1]))
list(map(func,l))
print(l1)


