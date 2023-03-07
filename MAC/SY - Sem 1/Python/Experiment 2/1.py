english = int(input("Enter English marks: "))
math = int(input("Enter maths marks: "))
physics = int(input("Enter physics marks: "))
chemistry = int(input("Enter chemistry marks: "))
biology = int(input("Enter biology marks: "))
average = (english+math+physics+chemistry+biology)/5

if average >= 80:
    print("Grade is A")
elif average >= 70:
    print("Grade is B")
elif average >= 60:
    print("Grade is C")
elif average >= 50:
    print("Grade is D")
elif average >= 40:
    print("Grade is E")
else:
    print("Grade is F")
