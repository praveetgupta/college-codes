#Addition of single element in the list - insertion
print("\nAddition of elements in the list: ")
List = [1,2,"MIT",4,'WPU',6,'ENGG',[11,12],(23,24)]
List.append(11)
List.append(100)
print(List)


# Deletion of single element in the list - deletion
print("\nDeleting the element:")
List = [1,2,"MIT",4,'WPU',6,'ENGG',[11,12],(23,24)]
List.remove('MIT')
List.remove('ENGG')
List.remove('WPU')
print(List)


# Delete a list
li=[1,2]
print(li)
del li
print(li)