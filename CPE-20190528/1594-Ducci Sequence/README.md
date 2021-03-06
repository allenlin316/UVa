[![hackmd-github-sync-badge](https://hackmd.io/SrIt215NQMSKGpePAlgnfA/badge)](https://hackmd.io/SrIt215NQMSKGpePAlgnfA)

# UVa 1594 - Ducci Sequence



## 問題
* Ducci Sequence 是一組序列，它的下一組序列是由上一個序列中的 `相鄰數字` 的絕對差所形成
* 例如 :  (8, 11, 2, 7) -> (3, 9, 5, 1) -> (6, 4, 4, 2) -> (2, 0, 2, 4) -> (2, 2, 2, 2) -> (0, 0, 0, 0)
* 一個序列最終會是一個 `循環序列` 還是 `序列會是零`

## 想法
* 開一個陣列存放序列中的數字
* 用一個變數計算序列中所有數字加總是不是零，因為是絕對差，所以是零的話代表序列全為零
* 用字串相加把所有序列中的整數累加進字串中，再放進 `set<string> check` 檢查有沒有重複的

## Input
* 輸入一個整數 T 代表幾個測資 
* 輸入一個整數 n 代表序列中會有幾個數字
* 輸入 n 個整數

## Output
* 輸出結果會是 `ZERO` 還是 `LOOP`

## Sample Input
4  
4  
8 11 2 7  
5  
4 2 0 2 0  
7  
0 0 0 0 0 0 0  
6  
1 2 3 1 2 3  

## Sample Output  
ZERO  
LOOP  
ZERO  
LOOP  

###### tags: `UVa question`