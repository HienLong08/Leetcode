with open("Min Cost Climbing Stairs.INP", "r") as fin:
    data = fin.readlines()
    cost = list(map(int, data[0].split()))

N = len(cost)

Dp = [0] * (N + 1)

Dp[0] = 0
Dp[1] = 0

for i in range(2, N + 1):
    Dp[i] = min(Dp[i - 1] + cost[i - 1], Dp[i - 2] + cost[i - 2])

Output = Dp[N]

with open("Min Cost Climbing Stairs.OUT", "w") as fout:
    fout.write(str(Output))