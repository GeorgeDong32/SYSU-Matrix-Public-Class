# 解方程

# Description

已知多项式方程：
![file](/api/users/image?path=1/images/1593613517335.png)

求这个方程在[1, m]内的整数解（n 和 m 均为正整数）。

# Input

输入共 n+2 行。

第一行包含 2 个整数 n、m，每两个整数之间用一个空格隔开。

接下来的 n+1 行每行包含一个整数，依次为a<sub>0</sub>, a<sub>1</sub>, a<sub>2</sub>, … , a<sub>n</sub>。

# Output

输出第一行输出方程在[1, m]内的整数解的个数。

接下来每行一个整数，按照从小到大的顺序依次输出方程在[1, m]内的一个整数解。

# Sample Input 1

```
2 10
1
-2
1

```

# Sample Output 1

```
1
1
```

# Sample Input 2

```
2 10
2 
-3
1

```

# Sample Output 2

```
2
1
2
```

# Sample Input 3

```
2 10
1
3
2

```

# Sample Output 3

```
0
```

# Hint
对于 30%的数据，0 < n ≤ 2， |a<sub>i</sub>| ≤ $100$，a<sub>n</sub> ≠ 0， m ≤ 100；

对于 50%的数据，0 < n ≤ 100， |a<sub>i</sub>| ≤ $10^{100}$，a<sub>n</sub> ≠ 0，m ≤ 100；

对于 70%的数据，0 < n ≤ 100， |a<sub>i</sub>| ≤ $10^{10000}$，a<sub>n</sub> ≠ 0，m ≤ 10000；

对于 100%的数据，0 < n ≤ 100， |a<sub>i</sub>| ≤ $10^{10000}$，a<sub>n</sub> ≠ 0，m ≤ 1000000。 