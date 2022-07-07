# 复原 IP 地址

# Description

给定一个只包含数字的字符串，请实现 `Solution` 类的 `restoreIpAddresses` 函数，复原它并返回所有可能的 IP 地址格式。

有效的 IP 地址（IPv4）正好由四个整数（每个整数位于 0 到 255 之间组成），整数之间用 '.' 分隔。

```
class Solution:
  def restoreIpAddresses(self, s: str):
```

# Sample Input
```
"25525511135"
```

# Sample Output
```
["255.255.11.135", "255.255.111.35"]
```