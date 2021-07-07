# UVa 10050-Hartals

## 問題
* [可能要自己看文章會比較清楚](https://onlinejudge.org/external/100/10050.pdf)
* 因為有hartal(抗議)所以導致有些時間沒有工作，求N天中總共有幾天沒有工作

## 想法
* 其實就是等差的概念
* 要注意題目要求，每一次simulation都是從星期日開始，星期五與星期六不算在工作天
* 創一個boolean陣列儲存哪幾天沒有工作(true)
* 最後跑迴圈，看陣列有幾個true

## Input
* 第一行輸入一個整數T代表有幾個測資
* 每一行測資的一開始會先輸入整數 N(7$\le$ N $\le$ 3650)代表有幾天要模擬
* 下一行會輸入整數P(1 $\le$ P $\le$ 100)代表有幾個政黨要計算
* 接下來會有P行測資代表每一個政黨會以什麼頻率去抗議(hartal)

## Output
* 輸出有幾天沒有工作

## Sample Input
2  
14  
3  
3  
4  
8  
100  
4   
12   
15   
25   
40   

## Sample Output 
5  
15  
###### tags: `UVa question`