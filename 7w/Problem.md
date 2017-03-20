<!-- MarkdownTOC -->

- [1:统计数字字符个数](#1统计数字字符个数)
- [2:找第一个只出现一次的字符](#2找第一个只出现一次的字符)
- [3:石头剪子布](#3石头剪子布)
- [4:最长最短单词](#4最长最短单词)
- [5:密码翻译](#5密码翻译)

<!-- /MarkdownTOC -->


<a name="1统计数字字符个数"></a>
## 1:统计数字字符个数

描述

输入一行字符，统计出其中数字字符的个数。

输入

一行字符串，总长度不超过255。

输出

输出为1行，输出字符串里面数字字符的个数。

样例输入

```
Peking University is set up at 1898.
```

样例输出

```
4
```

<a name="2找第一个只出现一次的字符"></a>
## 2:找第一个只出现一次的字符

描述

给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。

输入

一个字符串，长度小于100000。

输出

输出第一个仅出现一次的字符，若没有则输出no。

样例输入

```
abcabd
```

样例输出

```
c
```

<a name="3石头剪子布"></a>
## 3:石头剪子布

描述

石头剪子布，是一种猜拳游戏。起源于中国，然后传到日本、朝鲜等地，随着亚欧贸易的不断发展它传到了欧洲，到了近现代逐渐风靡世界。简单明了的规则，使得石头剪子布没有任何规则漏洞可钻，单次玩法比拼运气，多回合玩法比拼心理博弈，使得石头剪子布这个古老的游戏同时用于“意外”与“技术”两种特性，深受世界人民喜爱。 
游戏规则：石头打剪刀，布包石头，剪刀剪布。 
现在，需要你写一个程序来判断石头剪子布游戏的结果。

输入

输入包括N+1行：
第一行是一个整数N，表示一共进行了N次游戏。1 <= N <= 100。
接下来N行的每一行包括两个字符串，表示游戏参与者Player1，Player2的选择（石头、剪子或者是布）：
S1 S2
字符串之间以空格隔开S1,S2只可能取值在{"Rock", "Scissors", "Paper"}（大小写敏感）中。

输出

输出包括N行，每一行对应一个胜利者（Player1或者Player2），或者游戏出现平局，则输出Tie。

样例输入

```
3
Rock Scissors
Paper Paper
Rock Paper
```

样例输出

```
Player1
Tie
Player2
```

提示

Rock是石头，Scissors是剪刀，Paper是布。

<a name="4最长最短单词"></a>
## 4:最长最短单词

描述

输入1行句子（不多于200个单词，每个单词长度不超过100），只包含字母、空格和逗号。单词由至少一个连续的字母构成，空格和逗号都是单词间的间隔。

试输出第1个最长的单词和第1个最短单词。 

输入

一行句子。

输出

两行输出：
第1行，第一个最长的单词。
第2行，第一个最短的单词。

样例输入

```
I am studying Programming language C in Peking University
```

样例输出

```
Programming
I
```

提示

如果所有单词长度相同，那么第一个单词既是最长单词也是最短单词。

<a name="5密码翻译"></a>
## 5:密码翻译

描述

在情报传递过程中，为了防止情报被截获，往往需要对情报用一定的方式加密，简单的加密算法虽然不足以完全避免情报被破译，但仍然能防止情报被轻易的识别。我们给出一种最简的的加密方法，对给定的一个字符串，把其中从a-y，A-Y的字母用其后继字母替代，把z和Z用a和A替代，其他非字母字符不变，则可得到一个简单的加密字符串。

输入

输入一行，包含一个字符串，长度小于80个字符。

输出

输出每行字符串的加密字符串。

样例输入

```
Hello! How are you!
```

样例输出

```
Ifmmp! Ipx bsf zpv!
```