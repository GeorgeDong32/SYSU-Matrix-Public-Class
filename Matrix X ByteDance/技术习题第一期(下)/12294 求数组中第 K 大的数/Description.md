# 求数组中第 K 大的数

# Description
请实现 `Solution` 类的 `findKthLargest` 函数，在未排序的数组中找到第 k 个最大的元素。请注意，你需要找的是数组排序后的第 k 个最大的元素，而不是第 k 个不同的元素。

```
class Solution:
    def findKthLargest(self, nums, k) -> int:
```

# Sample Input 1
```
nums = [3, 2, 1, 5, 6, 4]
k = 2
```

# Sample Output 1
```
5
```

# Sample Input 2
```
nums = [3, 2, 3, 1, 2, 4, 5, 5, 6]
k = 4
```

# Sample Output 2
```
4
```