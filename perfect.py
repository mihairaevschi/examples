number = int(input("Number: "))

def calcul(nr):
    sum = 0
    for i in range(1, nr //2+1):
        if nr % i == 0:
            sum = sum+i
        if sum == nr:
            p=True
        else:
            p=False
    return p

print("Numar perfect: ", calcul(number))