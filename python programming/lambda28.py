A=set(map(int,input("enter no set A:-").split(' ')))
B=set(map(int,input("enter no in setB:-").split(' ')))
print("A=",A)
print("B=",B)
print("A-B:-")
print(set(filter(lambda x :True if x not in B else False ,A)))
print("B-A:-")
print(set(filter(lambda x :True if x not in A else False ,B)))