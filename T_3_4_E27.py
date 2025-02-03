n = int(input())

binary = bin(n)
binary = binary[2:]

for i in range(len(binary) - 1):
    binary = binary[1:]  + binary[0]
    num = int(binary, 2)
    if num > n:
        n = num
    
print(n)