# 链表求和

# Description
给定两个链表 L1、L2，每个元素是为 10 以内的正整数，整个链表表示一个数字，表头为高位。

请实现 `Solution` 类的 `addTwoNumbers` 方法，求两个链表之和，以链表形式返回。

```
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
```

# Sample Input
```
5 -> 6 -> 2 -> 3 -> 7
1 -> 7 -> 0 -> 9 -> 2
```

# Sample Output
```
7 -> 3 -> 3 -> 2 -> 9
```

> Hint：两个链表之和为：56237 + 17092 = 73329