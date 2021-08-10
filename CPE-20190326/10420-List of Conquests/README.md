[![hackmd-github-sync-badge](https://hackmd.io/NlNMN8vwTHW65uthUuL7gg/badge)](https://hackmd.io/NlNMN8vwTHW65uthUuL7gg)

# UVa 10420 - List of Conquests



## 問題
* 每一個國家會有對應的人名(不只一個人)，要計算每一個國家有幾個人
* 答案要依國家的首字母順序排序

## 想法
* 題目每一行給你國家跟一個人名，又要你按照國家首字母順序排序
* 我就想到 `map<string,int> mp` 跑迴圈讀測資，對應的 `value++`
* `map` 本身就會把 `key` 從小到大排序，所以不用顧慮國家輸出要排序的問題

## Sample Input
3  
Spain Donna Elvira  
England Jane Doe  
Spain Donna Anna  

## Sample Output
England 1  
Spain 2  

###### tags: `UVa question`