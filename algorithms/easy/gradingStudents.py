# Problem definition https://www.hackerrank.com/challenges/grading/problem

def gradingStudents(grades):
    grades.pop(0)
    for i in range(len(grades)):
        count = 0
        if grades[i]>=38:
            while(count < 3):
                if((grades[i] + count)%5 == 0): 
                    grades[i] = grades[i] + count
                count = count + 1
    return grades

result = gradingStudents([4,73,67,38,33])
print(result)