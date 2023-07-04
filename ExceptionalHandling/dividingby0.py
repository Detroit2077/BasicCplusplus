# write a program to divide a number with 0 and handle the exception

try:
    a = int(input("Enter a number: "))
    b = int(input("Enter a number: "))
    c = a/b
    print(c)
except Exception as e:
    print("Exception Occurred: ", e)
finally:
    print("Finally block executed")

    