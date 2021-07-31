[![hackmd-github-sync-badge](https://hackmd.io/PZONu-AiSJW7igmKTZL7Cg/badge)](https://hackmd.io/PZONu-AiSJW7igmKTZL7Cg)

# UVa 11220 - Decoding the message


## 問題
* 有兩位同學很有事，傳訊息因為怕被發現，所以加密後才傳送訊息
* 要破解他們的訊息內容
* 加密規則請參考題目或 [ZeroJudge](https://zerojudge.tw/ShowProblem?problemid=e269)


## 想法
* 逐行讀取，用 `sstream` 拆開每一個單字
* 用一個變數 `wordNeed` 跑需要的第幾個字母
* 假如單字長度太短就 `continue` ，且 `wordNeed` 不用加一
* 要注意輸出格式

## Input
* 第一行輸入一個數字代表幾個測資，接著會空一行
* 輸入好幾行的密文，直到兩個換行結束

## Output
* 一行一行的輸出訊息內容
* 兩個測資之間要空行(最後一個測資後也要空)

## Sample Input
2   

Hey good lawyer  
as I previously previewed  
yam does a soup  

First I give money to Teresa  
after I inform dad of  
your horrible soup  

## Sample Output
Case #1:  
How  
are  
you  

Case #2:  
Fine  
and  
you  
###### tags: `UVa question`