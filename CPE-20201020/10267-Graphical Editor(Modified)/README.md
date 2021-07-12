[![hackmd-github-sync-badge](https://hackmd.io/tgQTnMvkToq6gU8mJGe7nw/badge)](https://hackmd.io/tgQTnMvkToq6gU8mJGe7nw)
# UVa 10267 - Graphical Editor (Modified)

CPE 跟 UVa 的題目只有 `table` 範圍不一樣

## 問題
* 這題就是要模擬圖形編輯器(Graphical Editor)的功能
* [編輯器有的功能點我看表格](https://onlinejudge.org/external/102/10267.pdf)
* 這邊列出我一直出錯的地方


| 規則        |                                                                     |
| ----------- | ------------------------------------------------------------------- |
| L X Y C     | 假設你當初設定的 table 是從1開始的話，要注意他這邊的 X、Y 的值會有0 |
| V X Y1 Y2 C | Y1、Y2 會有大小之分                                                 |
| H X1 X2 Y C |   X1、X2 會有大小之分
| K X1 Y1 X2 Y2 C | X1、X2、Y1、Y2 都有大小之分
| F X Y C | 要用 Depth First Search，要注意有可能本來的顏色跟要變換的顏色可能會一樣|

## 想法
* 我是用物件做，因為一個graph可以有很多種功能
* DFS 要注意結束條件
* 基本上題目沒有說的地方，自己在寫的時候還是要考慮，不然會 TLE 之類的

## Sample Input
I 5 6  
L 2 3 A  
S one.bmp  
G 2 3 J  
F 3 3 J  
V 2 3 4 W  
H 3 4 2 Z  
S two.bmp  
X  

## Sample Output
one.bmp  
OOOOO  
OOOOO  
OAOOO  
OOOOO  
OOOOO  
OOOOO  
two.bmp  
JJJJJ  
JJZZJ   
JWJJJ  
JWJJJ  
JJJJJ  
JJJJJ  

###### tags: `UVa question`

