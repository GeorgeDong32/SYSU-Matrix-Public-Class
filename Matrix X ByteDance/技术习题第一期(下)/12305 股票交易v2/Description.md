# 股票交易v2

# Description
给定一个数组代表股票每天的价格，请问只能买卖一次的情况下，最大化利润是多少？

请实现 `Solution` 类的 `maxProfit` 函数，输出最大利润。

```
class Solution:
    def maxProfit(self, prices) -> int:
```

# Sample Input 1
```
[10, 80, 120, 130, 70, 60, 100, 125]
```
# Sample Output 1
```
120
```
> Hint: 10 买进，130 卖出

# Sample Input 2
```
[100, 80, 120, 130, 70, 60, 100, 125]
```
# Sample Output 2
```
65
```
> Hint: 60 买进，125 卖出