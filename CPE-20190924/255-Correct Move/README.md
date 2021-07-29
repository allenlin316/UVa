[![hackmd-github-sync-badge](https://hackmd.io/fI3JYvMPRJCz_m5renhwkg/badge)](https://hackmd.io/fI3JYvMPRJCz_m5renhwkg)

# UVa 255 - Correct Move



## 問題
* 一個棋盤遊戲，規則如下
1. Queen、King 都只能走直線(沿著 row/column)，Queen 可以走一步以上，King 只能走  
一步的距離
2. 題目給三個整數 `King's 位置、Queen's 位置、Queen's 移動後位置`，要你判斷遊戲的狀態
3. 狀態分別為  
    * Illegal State : Queen's 位置與 King's 位置相同
    * Illegal Move : 上述狀態都符合規定，但 Queen's 移動後位置與移動前一樣，或是移動後  
    是沿著對角線移動，或是移動後超過 King's 位置
    * Move not allowed : 上述都符合規定，但 Queen's 位置移動後會與 King's 位置差一格
    * Continue : 如果 King 可以在 Queen's 移動位置後，還有辦法移動，即不會死路
    * Stop : Queen's 移動後，King 死路一條

## 想法
* 我是以一個類別 `class Game` 包裝整個遊戲規則
* 我用 `pair<int,int>` 把各個 `x、y 座標` 存起來
* 我寫的邏輯其實滿亂的，大致上就是硬爆
* 死路只要判斷方格的四個角落就好
* `illegal Move()` 要判斷 Queen 移動前後是不是會超過 King's 位置
* 按照題目給的規則順序寫成 `if-else` 這樣就沒甚麼問題

## Input 
* 輸入三個數字代表 `King's 位置、Queen's 位置、Queen's 移動後位置`

## Output
* 判斷遊戲狀態

## Sample Input
17 17 49  
17 49 56  
17 49 9  
17 49 17  
17 49 25  
17 49 33  
17 49 41  
17 49 49  
56 48 49  

## Sample Output
Illegal state  
Illegal move  
Illegal move  
Illegal move  
Move not allowed  
Continue  
Continue  
Illegal move  
Stop  

###### tags: `UVa question`