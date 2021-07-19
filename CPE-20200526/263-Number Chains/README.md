
# UVa 263 - Number Chains

## 問題
* 給一個數，把它重組成大到小與小到大，兩個做相減，求出新的數就是為一個 Number Chain
* 再把算出來的數以上述規則重組一遍，求出新數也是一個 Number Chain
* 所有的 Number Chain 不能有重複，重複就停止

## 想法
* 其實這題我之前寫的時候，全部都手刻，現在我有大概領會到了 [KISS principle](https://en.wikipedia.org/wiki/KISS_principle)
* 用了很多函式，只能說 `STL 函式庫` 真的好用
* 用字串讀入，好用 `sort()` 處理，再用 `stoi()` 轉回數字做兩數相減
* 把數字丟進 `vector<int> numChain` ，因為可以用 `count()` 函式來判斷陣列裡   
有沒有重複的數字，就不用另外寫迴圈慢慢跑了
* 我這邊用到 `to_string()` 把結果再轉回字串計算看看還有沒有 Number Chain

## Input
* 測資數字不會超過 `int` 的範圍

## Output
* 注意輸出的時候最後一筆測資也是要給它空格

## Sample Input
123456789  
1234  
444  
0  

## Sample Output
Original number was 123456789  
987654321 - 123456789 = 864197532  
987654321 - 123456789 = 864197532  
Chain length 2  

Original number was 1234  
4321 - 1234 = 3087  
8730 - 378 = 8352   
8532 - 2358 = 6174  
7641 - 1467 = 6174  
Chain length 4  

Original number was 444  
444 - 444 = 0  
0 - 0 = 0  
Chain length 2  

###### tags: `UVa question`