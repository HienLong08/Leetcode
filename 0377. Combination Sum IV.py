with open("Combination Sum IV.INP", "r") as fin:
    data = fin.readlines()
    nums = list(map(int, data[0].split()))
    target = int(data[1])

Dp = [0] * (target + 1)

Dp[0] = 1

for i in range(1, target + 1):
    for j in nums:
        if i >= j:
            Dp[i] += Dp[i - j]

Output = Dp[target]

with open("Combination Sum IV.OUT", "w") as fout:
    fout.write(str(Output))

