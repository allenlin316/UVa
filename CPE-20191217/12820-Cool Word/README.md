[![hackmd-github-sync-badge](https://hackmd.io/kd59igrUSW6a6rgjHIYnVw/badge)](https://hackmd.io/kd59igrUSW6a6rgjHIYnVw)

# UVa 12820 - Cool Word

## 問題
* 一串英文字，每個字母出現的頻率，有沒有相同的，如果有那就不是 `Cool Word`
* 都沒有相同的話，計算看全部有幾個字串是 `Cool Word`

## 想法
* 剛開始假設所有字都是 `Cool Word` 
* 用 `map<char,int> mp` 儲存每一個字母出現的次數
* 把所有字母的出現次數丟進 `vector<int> check`  
* 利用 `count(check.begin(),check.end(),check[i])` 檢查有沒有次數一樣的
* 次數有一樣的就把 `Cool Word` 減一

## Input
* 輸入一數字代表接下來會有幾個字串要檢查
* 每一行會有一個字串

## Output
* 輸出會有幾個 `Cool Word`

## Sample Input
2  
ada  
bbacccd  
2  
illness  
a  

## Sample Output
Case 1: 1  
Case 2: 0  

###### tags: `UVa question`