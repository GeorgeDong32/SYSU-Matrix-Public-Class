# 单词搜索

# Description

给定 1 个二维字符数组 `cmap` 和 1 个单词 `word`，请实现 `Solution` 类的 `` 函数，搜索 `word` 是否在 `cmap` 中。

搜索的定义是从 `cmap` 的任意位置开始，可以上下左右移动，依次和 `word` 每个字符匹配，如果 `word` 能匹配完，则存在，否则不存在。

注：`cmap` 中的每个位置只能被访问 1 次。

```
class Solution:
    def exist(self, cmap, word) -> bool:
```

# Sample Input
```
cmap = [
    ['a', 'c', 'd', 'z'],
    ['x', 't', 'r', 'o'],
    ['f', 'i', 'w', 'o']
]
word = 'zoo'
```

# Sample Output 1
```
True
```

# Sample Input 2
```
cmap = [
    ['a', 'c', 'd', 'z'],
    ['x', 't', 'r', 'o'],
    ['f', 'i', 'w', 'o']
]
word = 'wto'
```

# Sample Output 2
```
False
```