# 绝对众数

# Description
定义：给定 $N$ 个数，称出现次数最多的数为众数，若某数出现的次数大于 $N/2$ 称为绝对众数。

如 `A = [1, 2, 1, 3, 2]` 中，1 和 2 都是众数，但都不是绝对众数。

如 `A = [1, 2, 1, 3, 1]` 中，1是绝对众数。

请实现 `Solution` 类的 `majorityElement` 函数，找出给定数组 `nums` 中的绝对众数。

```
class Solution(object):
    def majorityElement(self, nums):
```

# Sample Input 1
```
[3, 2, 3]
```
# Sample Output 1
```
3
```

# Sample Input 2 
```
[2, 2, 1, 1, 1, 2, 2]
```
# Sample Output 2
```
2
```