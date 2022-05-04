firstNumber = input("Leave here X number... ")
lastNumber = input("Leave here Y number ")
firstNumber.isdigit()
lastNumber.isdigit()
def multiplicare(X, Y):
    x = str(X)
    y = str(Y)
    rezultatul = 0
    for i in range(len(y)):
        transport_intermediar = 0
        rezultatul_intermediar = ""
        for j in range(len(x) - 1, -1, -1):
            num = int(y[i]) * int(x[j]) + transport_intermediar
            if num > 9 and j > 0:
                rezultatul_intermediar = str(num % 10) + rezultatul_intermediar
                transport_intermediar = num // 10
            else:
                rezultatul_intermediar = str(num) + rezultatul_intermediar
                transport_intermediar = 0
        rezultatul *= 10
        rezultatul += int(rezultatul_intermediar)
    return rezultatul

print(multiplicare(firstNumber, lastNumber))