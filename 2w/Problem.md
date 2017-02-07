<!-- MarkdownTOC -->

- [1:对齐输出](#1对齐输出)
- [2:输出保留12位小数的浮点数](#2输出保留12位小数的浮点数)
- [3:空格分隔输出](#3空格分隔输出)
- [4:计算球的体积](#4计算球的体积)
- [5:大象喝水](#5大象喝水)

<!-- /MarkdownTOC -->


<a name="1对齐输出"></a>
## 1:对齐输出

描述

读入三个整数，按每个整数占8个字符的宽度，右对齐输出它们。

输入

只有一行，包含三个整数，整数之间以一个空格分开。

输出

只有一行，按照格式要求依次输出三个整数，之间以一个空格分开。

样例输入

```
123456789 0 -1
```

样例输出

```
123456789        0       -1
```

<a name="2输出保留12位小数的浮点数"></a>
## 2:输出保留12位小数的浮点数

描述

读入一个双精度浮点数，保留12位小数，输出这个浮点数。

输入

只有一行，一个双精度浮点数。

输出

也只有一行，保留12位小数的浮点数。

样例输入

```
3.1415926535798932
```

样例输出

```
3.141592653580
```

<a name="3空格分隔输出"></a>
## 3:空格分隔输出

描述

读入一个字符，一个整数，一个单精度浮点数，一个双精度浮点数，然后按顺序输出它们，并且要求在他们之间用一个空格分隔。输出浮点数时保留6位小数。

输入

共有四行：
第一行是一个字符；
第二行是一个整数；
第三行是一个单精度浮点数；
第四行是一个双精度浮点数。

输出

输出字符、整数、单精度浮点数和双精度浮点数，之间用空格分隔。

样例输入

```
a
12
2.3
3.2
```

样例输出

```
a 12 2.300000 3.200000
```

<a name="4计算球的体积"></a>
## 4:计算球的体积

描述

对于半径为r的球，其体积的计算公式为V=4/3*πr3，这里取π= 3.14。

现给定r，求V。

输入

输入为一个不超过100的非负实数，即球半径，类型为double。

输出

输出一个实数，即球的体积，保留到小数点后2位。

样例输入

```
4
```

样例输出

```
267.95
```

<a name="5大象喝水"></a>
## 5:大象喝水

描述

一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。

输入

输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。

输出

输出一行，包含一个整数，表示大象至少要喝水的桶数。

样例输入

```
23 11
```

样例输出

```
3
```

提示

如果一个圆桶的深为h厘米，底面半径为r厘米，那么它最多能装Pi * r * r * h立方厘米的水。(设Pi=3.14159) 
1升 = 1000毫升
1毫升 = 1 立方厘米


