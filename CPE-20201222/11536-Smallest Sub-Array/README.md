[![hackmd-github-sync-badge](https://hackmd.io/Y316Ff0vStmFbpO_tYF2bg/badge)](https://hackmd.io/Y316Ff0vStmFbpO_tYF2bg)
# UVa 11536-Smallest Sub-Array


p.s. 這題根本不是二星題的難度阿~~ btw, 我們班的大神說這是滑窗的題目，值得一寫喔!!!

## 問題
* 給定一個序列(sequence)，要求出序列中從1~K的 `最小子序列長度` (注意: 是sequence)  
* 序列的規則 :   
X$_1$=1  
X$_2$=2  
X$_3$=3  
X$_i$=(X$_{i-1}$ + X$_{i-2}$ + X$_{i-3}$ )%M + 1  `for i = 4 to N`

## 想法
* 必須運用到滑窗法([Window Sliding Technique](https://www.geeksforgeeks.org/window-sliding-technique/))，不然會TLE
* 使用雙指針分別指向兩端，當新的元素與原來窗口中的元素不相等時，就加入其中；  
若相等則把窗口的左側向右移動，直到不與新的元素重複
* 我的queue是窗口(左指針)，last_pos是右指針，每次加入一個數就判斷是否與queue的front  
有重複，有重複就把queue的front拿掉直到不會與新加入的數字重複
* [參考](https://timbian.wordpress.com/2015/02/13/uva-11536-smallest-sub-array/)

## Input 
* 第一行會先輸入一個整數 T (T<100)代表會有幾行測資
* 每一行會有3個整數: N (2<N<1000001), M (0<M<1001), K (1<K<101)  
N 代表有N項，M在求序列時會用到，K代表子序列中要有1~K的整數

## Output
* 輸出 `Case X: 最小子序列長度` ，如果沒有則輸出 `Case X: sequence nai` 

## Sample Input
2  
20 12 4  
20 12 8  

## Sample Output
Case 1: 13  
Case 2: sequence nai  
###### tags: `UVa question`
