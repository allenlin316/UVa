[![hackmd-github-sync-badge](https://hackmd.io/hLZT-EKvTkyADfEu0AC6BQ/badge)](https://hackmd.io/hLZT-EKvTkyADfEu0AC6BQ)
# UVa 10268 - 498-bis

我送了 uDebug、CPE 公開測資、ZeroJudge 都對，就是 UVa Online Judge WA  
最後改掉一些誤差的地方就AC了   

## 問題
* 給定一條多項式(降冪)及 x 的值，要算微分後的答案

## 想法
* 這題不要用 pow() 函數運算，因為隱藏測資的數字很大，對 UVa 來說會有誤差的影響(我就是這樣WA的)
* 利用迴圈從一次方跑回到最高次方，一個一個累加起來就是答案
* 雖然題目說輸入輸出不會超過 int 的範圍，但在計算過程中可能會爆掉，所以要用 `long long int`

## Input
* 一組測資就是兩行，讀到EOF
* 每一組的第二行測資都是以降冪的方式給值，但要注意最後會 `先有空格才換行`(我被搞到)

## Output  
輸出每組微分最後的答案

## Sample Input
7  
1 -1  
2  
1 1 1  

## Sample Output
1  
5   

###### tags: `UVa question`