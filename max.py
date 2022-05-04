number = int(input('Number= '))
def calcul(num):
    max = num
    while num != 0:
        num=int(input('Number= '))
        if num > max:
            max = num
    return max
print("Numărul maxim= ", calcul(number))