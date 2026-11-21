with open("Decode Ways.INP", "r") as fin:
    data = fin.readlines()
    s = data[0].strip()

N = len(s)

Dp = [0] * (N + 1)

Dp[0] = 1

if s[0] != '0':
    Dp[1] = 1

for i in range(2, N + 1):
    One = int(s[i - 1])
    Two = int(s[i - 2:i])

    if 1 <= One <= 9:
        Dp[i] += Dp[i - 1]

    if 10 <= Two <= 26:
        Dp[i] += Dp[i - 2]

Output = Dp[N]

with open("Decode Ways.OUT", "w") as fout:
    fout.writelines(str(Output))