# 把中文数字转成 int 数字

# Description
在中文页面解析、中文数据处理中，常常遇到用中文表示的数字，例如：五千三百万零五百零一。

我们一般需要把它转化成 int 型整数，进行实际存储和使用。

请实现 `Solution` 类的 `cn2digital` 函数，完成一亿（不含）以内的中文数字到int整数的转换。

```python
class Solution:
  def cn2digital(self, number):
```

# Sample Input 1
```
"一万零一"
```

# Sample Output 1
```
"10001"
```

# Sample Input 2
```
"三千五百万"
```

# Sample Output 2
```
35000000
```
# Sample Input 3
```
"三千五百一十万"
```
# Sample Output 3
```
35100000
```