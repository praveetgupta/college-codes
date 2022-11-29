# Python program for multilevel inheritance
# Base class
class Grandfather:

    def __init__(self, grandfathername):
        self.grandfathername = grandfathername

# Intermediate class


class Father(Grandfather):
    def __init__(self, fathername, grandfathername):
        self.fathername = fathername

        # invoking constructor of Grandfather class
        Grandfather.__init__(self, grandfathername)

# Derived class


class Son(Father):
    def __init__(self, sonname, fathername, grandfathername):
        self.sonname = sonname

        # invoking constructor of Father class
        Father.__init__(self, fathername, grandfathername)

    def print_name(self):
        print('Grandfather name :', self.grandfathername)
        print("Father name :", self.fathername)
        print("Son name :", self.sonname)


s1 = Son('Rahul', 'Rajeev', 'Pandit Nehru')
print(s1.grandfathername)
s1.print_name()


# single inheritance
class Emp:
    def getdata(self):
        self.name = input("Enter employee name: ")
        self.dep = input("Enter department: ")
        self.salary = input("Enter salary: ")

    def display(self):
        print("Employee Details: \n")
        print("Employee name: \n", (self.name), "\nDepartment: \n", (self.dep), "\nSalary: \n ",
              (self.salary))


e = Emp()
e.getdata()
e.display()


# multiple inheritance
class Stud():
    def getInfo(self):
        self.name = input("Enter student name: ")
        self.dep = input("Enter department: ")
        self.rollno = input("Enter roll_no: ")


class college():
    def clgdetails(self):
        self.cname = input("Enter college name: ")


class student(Stud, college):
    def display(self):
        print("Student Information: ")
        print("Student name: ", (self.name), "\t Department: ",
              (self.dep), "\t Rollno:", (self.rollno))
        print("Studying in college: ", (self.cname))


st = student()
st.getInfo()
st.clgdetails()
st.display()
