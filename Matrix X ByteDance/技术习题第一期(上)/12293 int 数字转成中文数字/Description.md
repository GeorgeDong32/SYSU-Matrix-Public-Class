# int 数字转成中文数字

# Description
我们经常需要把存储int型整数转化为中文表示的数字，进行实际使用。

请完成 `Solution` 类的 `digital2cn` 函数，完成一亿（不含）以内的 int 整数到中文数字的转换。

```
class Solution:
    def digital2cn(self, data):
```

# Sample Input 1
```
10001
```

# Sample Output 1
```
"一万零一"
```

# Sample Input 2
```
35000000
```
# Sample Output 2
```
"三千五百万"
```

# Sample Input 3
```
35100000
```
# Sample Output 3
```
"三千五百一十万"
```