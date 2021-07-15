[![hackmd-github-sync-badge](https://hackmd.io/lmQ3ljHATfqs_AtXWEv-QA/badge)](https://hackmd.io/lmQ3ljHATfqs_AtXWEv-QA)
# UVa 10189 - Minesweeper


## 問題
* 要求出附近有幾個地雷
* 圖片請看 [UVa 題目](https://onlinejudge.org/external/101/10189.pdf)  

## 想法
* 我是參考網路上的做法，不要全部輸入後才做處理
* 使用到動態二維陣列(其實也可以剛開始就開滿題目規定的上限陣列)，一個一個字元讀進去
* 遇到＊就把周圍的鄰近區域＋1

## Input
* 第一行讀入 row、column，讀到 0、0 就結束 

## Output
* 輸出周圍內有幾個地雷

###### tags: `UVa question`