# 蓄水问题

# Description
给定一个一维数组用于描述一个海拔，相邻的海拔高度不同，则下雨后低洼海拔的洼地会有积水。

假设雨水足够，能够填满所有低洼地段，请实现 `Solution` 类的 `maxArea` 函数，计算下雨后所有低洼地段总蓄水量。

```
class Solution:
    def maxArea(self, height):
```

# Sample Input 1
```
[2, 1, 2]
```

# Sample Output 1
```
1
```

# Sample Input 2
```
[5, 2, 1, 4, 3]
```

# Sample Output 2
```
5
```

# Sample Input 3
```
[1, 8, 6, 2, 5, 4, 8, 3, 7]
```

# Sample Output 3
```
19
```