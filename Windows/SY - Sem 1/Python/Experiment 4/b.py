#Write a Python program to find repeated items of a tuple.

tup1 = (1, 2, 3, 4, 5, 6, 3, 7)
print("Tuple: ",tup1)
print("Repeated items: ")
for i in tup1:
    if tup1.count(i)>1:
        print(i)