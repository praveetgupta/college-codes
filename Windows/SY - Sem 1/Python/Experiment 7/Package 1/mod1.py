def check_prime(num):
    if num == 1:
        print("Prime Number")
        return
    elif num == 2 or num == 3:
        print("Prime Number")
        return
    elif(num % 2 == 0 or num % 3 == 0):
        print("Not a Prime number")
        return
    else:
        return

    count = 5
    for count in range(5, num, count+6):
        if (num % count) == 0 or ((num) % count+2 == 0):
            print("Not a prime number")
            return

        print("Prime number")