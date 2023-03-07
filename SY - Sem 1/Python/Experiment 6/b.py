# Write a Python program to concatenate dictionaries to create a new one.

d1 = {1: 10, 2: 20}
d2 = {3: 30, 4: 40}
d3 = {}
for d in (d1, d2):
    d3.update(d)
print(d3)