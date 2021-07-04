---
tags: UVa question  
---
# UVa 12218-An Industrial Spy

[![hackmd-github-sync-badge](https://hackmd.io/8pby5Q1GQU2yvDesDr2jjw/badge)](https://hackmd.io/8pby5Q1GQU2yvDesDr2jjw)


## 問題
* 給定一個數，把每個digit拆開再組合，請問可以組成幾個質數?

## Sample Input
4  
17  
1276543  
9999999  
011  

## Sample Output
3  
1336  
0  
2  

---

## 想法
* 這是我們班大神教我的，使用遞迴來處理
* 使用到[愛氏篩(質數篩)](https://zh.wikipedia.org/wiki/%E5%9F%83%E6%8B%89%E6%89%98%E6%96%AF%E7%89%B9%E5%B0%BC%E7%AD%9B%E6%B3%95)建構質數表
* 把字串拆到剩一個字的時候判斷(也就是basis)質數
* 把判斷完的質數放進set的容器，可以避免重複算到
* 使用next_permutation()的函式做排列組合
* 最後輸出set容器的size就可以知道答案