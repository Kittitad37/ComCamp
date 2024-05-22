grade = int(input("Input your grade : "))
result = "F"
if (grade <= 100):
    if (grade >= 80):
        result = "A"
    elif (grade >= 70):
        result = "B"
    elif (grade >= 60):
        result = "C"
    elif (grade >= 50):
        result = "D"
else :
    result = "Error"
print(result)
