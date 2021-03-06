[![hackmd-github-sync-badge](https://hackmd.io/5fYFnRhvQ_KRY5d1NfzZKg/badge)](https://hackmd.io/5fYFnRhvQ_KRY5d1NfzZKg)

# UVa 10813 - Traditional BINGO



## 問題
* 傳統 Bingo 遊戲
* 有五行、五列數字，還有一些小規則這邊就不細講
* 可以照玩家心情把1~75數字填進這方格中(傳統 Bingo 每一行能填的數字範圍有規定)
* 然後會有人公布數字，要看玩家在公布幾個數字之後會 Bingo

## 想法
* 重點就在 `pair<int,int> arr[76]` 儲存玩家的號碼與在表格中的第幾行第幾列
* 然後慢慢一個一個讀進公布的數字，對應玩家事先儲存的號碼
* 看會不會 Bingo 
* 表格的正中間沒有數字，所以是可以忽略的

## Input
* 輸入第一行代表有幾個玩家要查看
* 開始一行一行讀入玩家的號碼
* 接著再讀入公布的數字(會有75個數字)

## Output
* 看每一位玩家需要喊出幾個數字才會 Bingo

## Sample Input 
1  
10 17 39 49 64  
12 21 36 55 62  
14 25 52 70  
7 19 32 56 68  
5 24 34 54 71  
1 2 3 4 5 6 7 8 9 10  
11 12 13 14 15 16 17 18 19 20  
21 22 23 24 25 26 27 28 29 30  
31 32 33 34 35 36 37 38 39 40  
41 42 43 44 45 46 47 48 49 50  
51 52 53 54 55 56 57 58 59 60  
61 62 63 64 65 66 67 68 69 70  
71 72 73 74 75  

## Sample Output
BINGO after 14 numbers announced  

###### tags: `UVa question`