# OPENING FILE IN WRITE MODE
import sys
import os
f = open("sample.txt", "w")
print(f.name)
print(f.mode)
print(f.encoding)
str = input("enter text:")
f.write(str)
f.close()
print(f.closed)

# OPENING FILE IN APPEND MODE
f = open("sample.txt", "a")
str = input("enter text:")
f.write(str)

# OPENING FILE IN READ MODE
f = open("sample.txt", "r")
str1 = f.read()
print(str1)


# STORE GROUP OF STRINGS INTO A FILE
f = open("sample.txt", "w")
# create text file and write @ in text file after 3 lines
print("Enter text (@ at end):")
while str != '@':
    str = input()   # accept strings from user
    if (str != '@'):
        f.write(str+"\n")
f.close()


# READ ALL STRINGS FROM ABOVE FILE
f = open("sample.txt", "r")
str1 = f.read()
print(str1)
f.close()

# APPEND DATA TO EXISTING FILE

f = open("sample.txt", "a+")
# create text file and write @ in text file after 3 lines
print("Enter text to append (@ at end):")
while str != '@':
    str = input()   # accept strings from user
    if (str != '@'):
        f.write(str+"\n")

f.seek(0, 0)  # seek(offset,fromwhere) offset means how many bytes to move ,
# fromwhere means from which position to move(0- beginning,1-from current,2-from end of file)
print("THE CONTENTS OF FILE ARE:")
str = f.read()
print(str)
f.close()


# CHECK IF FILE EXISTS OR NOT

fname = input("enter file name:")  # give full path of file stored

if os.path.isfile(fname):
    f = open(fname, 'r')
else:
    print(fname+'does not exist')
    sys.exit()

str = f.read()
print(str)
f.close()

# CHECK IF PATH EXISTS OR NOT
# Specify path
path = 'E:/PYTHON'

# Check whether the specified exists or not
isExist = os.path.exists(path)
print(isExist)


# Specify path
path = 'E:/sample.txt'

# Check whether the specified path exists or not
isExist = os.path.exists(path)
print(isExist)


# COUNTING LINES,WORDS AND CHARACTERS IN A FILE

fname = input("enter file name:")  # give full path of file stored

if os.path.isfile(fname):
    f = open(fname, 'r')
else:
    print(fname+'does not exist')
    sys.exit()

cl = cw = cc = 0  # initialize the counter for lines,words and characters to 0
for line in f:
    words = line.split()
    cl = cl+1
    cw = cw + len(words)
    cc = cc+len(line)

print("No of lines", cl)
print("No of words", cw)
print("No of characters", cc)

# COPY THE CONTENTS OF ONE FILE TO ANOTHER FILE

# open both files
# create 1.txt and 2.txt with some contents and check 2.txt after execution
with open('1.txt', 'r') as file1, open('E:/2.txt', 'a') as file2:
    for line in file1:     # read content from first file
        file2.write(line)  # append content to second file

with open('1.txt', 'r') as file1, open('E:/2.txt', 'w') as file2:
    for line in file1:     # read content from first file
        file2.write(line)  # append content to second file