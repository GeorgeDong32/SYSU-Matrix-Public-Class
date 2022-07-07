# 字符串压缩编码

# Description
输入一串字符，请实现 `Solution` 类的 `compressString` 函数，将字符串中连续出现的重复字母进行压缩，并输出压缩后的字符串。

压缩规则：
1. 仅压缩连续重复出现的字符。
2. 压缩字段的格式为”字符+字符重复的次数”。
3. 若“压缩”后的字符串没有变短，则返回原先的字符串

```
class Solution:
  def compressString(self, S: str) -> str:
```

# Sample Input 1
```
"abcbc"
```

# Sample Output 1
```
"abcbc"
```
> Hint: 字符串 `"abcbc"` 由于无连续重复字符，压缩后的字符串还是 `"abcbc"`

# Sample Input 2
```
"xxxyyyyyyz"
```
# Sample Output 2
```
"x3y6z"
```
> Hint: 字符串 `"xxxyyyyyyz"` 压缩后就成为 `"3x6yz"`。

# Sample Input 3
```
"abbaaaccc"
```
# Sample Output 3
```
"ab2a3c3"
```