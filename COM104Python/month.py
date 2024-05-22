month = int(input("Input month : "))
result = 1
if (month == 2):
    result = 3
elif (month == 4 or month == 6 or month == 9 or month == 11):
    result = 2

print(result)