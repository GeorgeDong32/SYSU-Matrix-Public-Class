# 判断单向链表是否有环

# Description
给定一个单向链表，请实现 `Solution` 类的 `hasCycle` 函数，判断链表中是否有环。

要求：在空间复杂度 O(1) 的情况下，时间复杂度最小。
```
class Solution:
    def hasCycle(self, head: ListNode) -> bool:
```

# Sample Input
```
A -> B -> C -> D -> B -> C -> D
```
# Sample Output
```
True
```
> D 指向 B 形成环

