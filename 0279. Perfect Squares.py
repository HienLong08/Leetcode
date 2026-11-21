with open("Perfect Squares.INP", "r") as fin:
    data = fin.readlines()
    n = int(data[0])

Dp = [99999999] * (n + 1)

Dp[0] = 0

for i in range(1, n + 1):
    for j in range(1, int(i ** 0.5) + 1):
        Dp[i] = min(Dp[i], Dp[i - j ** 2] + 1)

Output = Dp[n]

with open("Perfect Squares.OUT", "w") as fout:
    fout.writelines(str(Output))