# Write a Python program to print all unique values in a dictionary.

dict1 = {1: "one", 2: "two", 3: "three", 4: "three"}
list1 = []
uniqueList = []
for i in dict1:
    list1.append(dict1[i])
for i in list1:
    if i in uniqueList:
        pass
    else:
        uniqueList.append(i)

print(uniqueList)
