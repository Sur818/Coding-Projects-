f=open("file19.txt",'r')
a=f.read()
print(a)
substring=input("enter subtxext want to delete:-")
a=a.replace(substring,"")
a=a.split(' ')
print(" ".join(a))
#f=open("file19update.txt",'w')
#f.write(" ".join(a))