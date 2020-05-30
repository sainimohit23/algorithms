if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    li = student_marks.get(query_name)
    summer = 0
    divider = 0

    for i in li:
        summer += i
        divider += 100
    ans = summer/divider
    ans = ans*100
    print("{0:.2f}".format(ans))
