def calculate_factorial(num):
    fact = 1
    if num > 0:
        for count in range(1, num+1):
            fact = fact*count
        print("\nFactorial of ", num, "is ", fact)
    elif num == 0:
        print("\nFactorial of 0 is 1")
    else:
        print("Please enter a positive integer")


def add(x, y):
    sum = x+y
    return sum
