# Input two arrays as strings
signals = input()  # First input array as a string
weights = input()  # Second input array as a string

signals = signals[1:-1]
weights = weights[1:-1];
s = [int(i) for i in signals.split(',')]
w = [int(i) for i in weights.split(',')]
ms = []
idx = 0
for i in s:
    ms.append(i * w[idx])
    idx += 1

# print(ms)

n = len(ms)
maxi = 0
for i in range(n):
    for j in range(i, n, 1):
        mult = 1
        for k in range(i, j + 1, 1):
            mult *= ms[k];
        if mult > maxi:
            maxi = mult
print(maxi)
