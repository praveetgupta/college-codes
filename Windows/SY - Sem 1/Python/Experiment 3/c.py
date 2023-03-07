print("\nComparing Common Elements in a list: ")
List6 = [10, 11, 12]
List7 = [10, 13, 15]
print(set(List6) & set(List7))  # Method 1 - Using Set datatype for Comparing
for i in List6:
    for j in List7:
        if i == j:
            print(i)  # Method 2
