score = int(input("input your score : "))
result = score // 10
grade = {8: "A", 7: "B", 6: "C", 5: "D",
         4: "F",  3: "F", 2: "F", 1: "F", 0: "F"}
print(grade[result])
