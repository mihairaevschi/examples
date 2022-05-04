number = int(input('Number= '))
def calcul(num):
    min = num
    while num != 0:
        num=int(input('Number= '))
        if num < min and num != 0:
            min = num
    return min
print("Numărul minim= ", calcul(number))