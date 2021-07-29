
# UVa 679 - Dropping Balls

## 問題
* 有一棵完滿二元樹(full binary tree)，每一個節點都有 flag(true or false)
* 從根節點(root node)開始走，假設遇到 false 節點就會把 fasle 改成 true，接著往它的左子樹(left subtree)走，遇到 true 則把 true 改成 false，並往它的右子樹(right subtree)走

## 想法
* 我是參考網路上其他人的想法，自己原本是直接從葉節點想，但規律會很難找
* 假設要算第n次的結果，n的值為偶數的話，從根節點往下走，則會先走右邊  
奇數的話則相反
* 每往下走一層數字(n)就要除以2
* 每個左子樹為它的 parent 的2倍，右子樹為 parent 的(2n+1)
* 用迴圈從根節點一層一層判斷，每一次要走左邊還右邊

## Input
* 第一行輸入一個整數，代表有幾筆測資
* 每一行測資有兩個整數(D、I)，`D` 代表樹的高度，`I` 代表要計算第 `I` 次的結果
## Sample Input
5  
4 2  
3 4  
10 1  
2 2  
8 128  
-1  

## Sample Output
12  
7  
512  
3  
255  

###### tags: `UVa question`
