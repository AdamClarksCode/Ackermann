def Ackermann(m, n):
    if m == 0:
        ans = n+1
    elif n == 0:
        ans = Ackermann(m-1, 1)
    else:
        ans = Ackermann(m-1, Ackermann(m, n-1))
    return ans

for i in range(0, 5):
    for j in range(0, 5):
        print("Ackermann of " + str(i) + ", " + str(j) + " is " + str(Ackermann(i, j)))
