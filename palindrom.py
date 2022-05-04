number = int(input("Number: "))

def calcul(nr):
    sum = 0
    m = nr
    while nr > 0:
        sum = sum * 10 + nr % 10
        nr = nr // 10
    if sum == m:
        palindrom=True
    else:
        palindrom=False
    return palindrom
print("Palindrom= ", calcul(number))