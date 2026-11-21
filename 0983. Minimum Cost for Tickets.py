with open("Minimum Cost for Tickets.INP", "r") as fin:
    data = fin.readlines()
    days = list(map(int, data[0].split()))
    costs = list(map(int, data[1].split()))

Dp = [0] * (max(days) + 1)

for i in range(1, max(days) + 1):
    if i not in days:
        Dp[i] = Dp[i - 1]

    else:
        Dp[i] = min(Dp[i - 1] + costs[0],Dp[max(0, i - 7)] + costs[1],Dp[max(0, i - 30)] + costs[2])

Output = Dp[max(days)]

with open("Minimum Cost for Tickets.OUT", "w") as fout:
    fout.writelines(str(Output))