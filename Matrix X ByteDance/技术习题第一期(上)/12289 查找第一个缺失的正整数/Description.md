# 查找第一个缺失的正整数

# Description
给定一个无序数组，请实现 `Solution` 类的 `firstMissingPositive` 函数，查找第一个缺失的正整数。

要求：时间复杂度 O(n) ，空间复杂度 O(1)。

```
class Solution(object):
    def firstMissingPositive(self, nums):
```
# Sample Input 1
```
[1, 2, 0]
```

# Sample Output 1
```
3
```

# Sample Input 2
```
[3, 4, -1, 1]
```

# Sample Output 2
```
2
```

# Sample Input 3
7 8 9 11 12

# Sample Output 3
1