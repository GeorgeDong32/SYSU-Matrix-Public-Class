# 找零钱问题v2

# Description
给定不同面额的硬币 `coins` 和一个总金额 `amount`，请实现 `Solution` 类的 `coinChange` 函数来计算可以凑成总金额所需的最少的硬币个数。如果没有任何一种硬币组合能组成总金额，返回 `-1`。

```
class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
```

# Sample Input 1
```
coins = [1, 2, 5], amount = 11
```

# Sample Output 1
```
3
```

>Hint: 11 = 5 + 5 + 1

# Sample Input 2
```
coins = [2], amount = 3
```

# Sample Output 2
```
-1
```