# 通配符匹配

# Description
给定字符串 `s` 和模式串 `p`，请实现 `Solution` 类的 `isMatch` 函数，实现支持 `'.'` 和 `'*'` 的正则表达式匹配。

模式串中有两个特殊字符 `'?'` 和 `'*'`，`'?'` 匹配任意1个字符，`'*'` 匹配任意多个字符。

```
class Solution:
    def isMatch(self, s: str, p: str) -> bool:
```

# Sample
```
isMatch('a', 'a') = True
isMatch('aa', 'a') = False
isMatch('a', '?') = True
isMatch('aa', 'a*') = True
isMatch('abc', '?*') = True
```