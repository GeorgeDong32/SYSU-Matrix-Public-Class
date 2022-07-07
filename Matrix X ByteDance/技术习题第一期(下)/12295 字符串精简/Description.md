# 字符串精简

# Description

请实现 `Solution` 类的 `removeDuplicates` 函数，对输入的字符串，去除其中的字符 `'b'` 以及连续出现的 `'a'` 和 `'c'`。

不允许使用类似 string.replace 函数。要求时间、空间复杂度尽量优化。A

```
class Solution:
    def removeDuplicates(self, S: str) -> str:
```

# Sample
```
'aacbd' -> 'cbd'
'aabcd' -> 'bcd'
'aaabbccc' -> 'ac'
```