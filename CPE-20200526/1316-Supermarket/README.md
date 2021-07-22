[![hackmd-github-sync-badge](https://hackmd.io/Hcqzd5J0QQu9uFHKFKeLvA/badge)](https://hackmd.io/Hcqzd5J0QQu9uFHKFKeLvA)
# UVa 1316 - Supermarket


## 問題
* 給你一堆商品價錢與期限，問你最高獲利是多少
* 細節題目內容可以去看 [ZeroJudge](https://zerojudge.tw/ShowProblem?problemid=f448)

## 想法
* 我自己寫的時候沒有考慮到當deadline到期時，要判斷 `vector<int> maxProfit` 的值是不是有可以  
替換成獲利比較多的，因為要是最大獲利，有用到 `Greedy Algo.` 的概念
* 所以我最後改成 `priority_queue<int, vector<int>, greater<int> > maxProfit` 的結構  
因為它可以把queue中最小的值放在最前面，所以當我時間 `time == deadline` 的時候   
且這個商品的price大於 `maxProfit` 的最小值時就pop掉最小值，丟進去商品
* 這題要注意的是，我原本是用 `vector<int> product` 但我發現丟 UVa 的時候，sort()會  
讓它爆掉，所以才改成 `map<int, vector<int> > product`(大神教我的)

## Input
* 會一直讀入測資直到 EOF
* 每一行的第一個數字為 `n` 代表有幾個商品
* 接下來輸入`n` 個商品，每一個商品都有價錢與到期日
* 每一行輸入的數字中間可能會有很多空格

## Output
* 計算最大獲利

## Sample Input
4 50 2 10 1 20 2 30 1  
7 20 1 2 1 10 3 100 2 8 2 5 20 50 10  

## Sample Output
80  
185  

###### tags: `UVa question`