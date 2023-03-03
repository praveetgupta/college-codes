rows = 5
for i in range(0, rows, 2):
    for j in range(0, i + 1):
        print("*", end='')
    print("\r")
for i in range(rows, 0, -2):
    for j in range(0, i - 2):
        print("*", end='')
    print("\r")