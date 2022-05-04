a = int(input('a= '))
b = int(input('b= '))
def calcul(n1, n2):
    if n1 == b:
        print('cmmdc= ', a)
    else:
        while n1 != n2:
            if n1 > n2:
                n1 = n1-n2
            else:
                n2 = n2-n1
    return n1

print('cmmdc= ', calcul(a,b))
