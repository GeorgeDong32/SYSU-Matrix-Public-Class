# 找零钱问题v1

# Description
给定不同面额的硬币 `coins` 和一个总金额 `amount`，请你实现 `Solution` 类的 `coinChange` 函数，来计算有多少种不同的硬币组合方式可以凑成总金额。

```
class Solution:
    def coinChange(self, coins, amount) -> int:
```

# Sample Input 1
```
coins = [1, 2, 5], amount = 5
```

# Sample Output 1
```
4
```

# Sample Input 2
```
coins = [2], amount = 3
```

# Sample Output 2
```
0
```