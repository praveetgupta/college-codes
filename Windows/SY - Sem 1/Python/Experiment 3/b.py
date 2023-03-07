# To Print Even numbers in a list
print('\nTo Print Even numbers in a list: ')
List5 = [10, 21, 4, 45, 66, 93]
print("List is: ", List5)
for num in List5:
    if num % 2 == 0:
        print(num, end=' ')
