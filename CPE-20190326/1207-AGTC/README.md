[![hackmd-github-sync-badge](https://hackmd.io/lI6wNCgQS7eVZYHIhNiuVQ/badge)](https://hackmd.io/lI6wNCgQS7eVZYHIhNiuVQ)

# UVa 1207 - AGTC



## 問題
* 給你兩個字串 x、y，從 x 要做幾次修改才會變成 y (minimum)
* 修改的方法有三種: 
    * Insertion : 插入字母到 x 字串，讓它與 y 字串中的字母相等
    * Deletion : 刪掉 x 字串中的字母，讓它與 y 字串中的字母相等
    * Change : 改掉 x 字串中的字母，讓它與 y 字串中的字母相等


## 想法
* 這題其實是 LCS(最長公共子序列) 的延伸
* 跟其他 dp 題一樣，要先找出子問題，要注意的是 word2 不能碰，只能對 word1 做修改
* 先想一下如果 `word1 = "acd", word2 = ""`，代表我們需要 delete 掉所有 word1 的字母，那假如 `word1="", word2="acd"`，代表要對 word1 insert 所有 word2 出現的字母，其實這些就算是 `base case`
* 可以看到下圖，當 word1 是空字串(最後一列)的時候，對應到的 word2 是 acd，代表我們需要 insert 3 個字母，後面的 base case 就以此類推

![base case 示意圖](https://i.imgur.com/vxxKOAq.png)

* 再把整個二維陣列填滿之前，要先了解怎麼操作 Insertion、Deletion、Change
* 我們是一個一個字母跑迴圈與 word2 做比較，剛開始第一個字母與 word2 一樣所以不用管它。我們 i 這個指標會停在第二個字母，再來比第二個字母，我們採用 insert 的話直接插一個
c 到 b 之前，這時代表 word2 已經跟 word1 insert 的 c 比完了，接著我們必須讓 j+1 ，i 則不用，因為 i 已經是指在第二個字母，但 j 指的那個字母已經比過了
* 相同的概念套用到 Deletion、Change，就會得到下面的結論
    * Insertion : (i, j+1)
    * Deletion : (i+1, j)
    * Change : (i+1, j+1)
* 將以上結果以 bottom-up 的方式填入表格，記得除非一樣，不然一定會有一次修改，所以每次比到不一樣的字母都要加一

![bottom-up 示意圖](https://i.imgur.com/J3Ji1RZ.png)

* 最後再 `return dp[0][0]` 就是答案

## Sample Input
10 AGTCTGACGC  
11 AGTAAGTAGGC  

## Sample Output
4  

###### tags: `UVa question`





