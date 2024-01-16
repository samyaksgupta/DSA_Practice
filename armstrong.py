n = int(input())
order = len(str(n))
total = 0
temp = n

while temp > 0:
    digit = temp % 10
    total += digit ** order
    temp //= 10
print(total)