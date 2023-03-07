# Create Tuple, Access Tuple, Update Tuple, Delete Tuple.


# Create Tuple
tup1 = ('physics', 'chemistry', 1997, 2000)
print("\nCreate Tuple:")
print(tup1)

# Access Tuple
print("\nAccess Tuple:")
print(tup1[0])
print(tup1[1:3])

# Update Tuple
print("\nUpdate Tuple:")
tup2 = (1, 2, 3, 4, 5, 6, 7)
print(tup2)

# Delete Tuple
print("\nDelete Tuple:")
tup3 = ("new tuple", 2005, 'python')
print(tup3)
del tup3
print("After deleting tup: \n")
print(tup3)