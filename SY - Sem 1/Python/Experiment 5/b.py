#Write a  Python program to perform following operations on sets:   intersection of  sets, union of sets, set difference, symmetric difference,Clear a set.

a = {1,2,3,4,5}
b = {4,5,6,7,8}
print(a.intersection(b))
print(a.union(b))
print(a.difference(b))
print(a.symmetric_difference(b))
a.clear()
print(a)
