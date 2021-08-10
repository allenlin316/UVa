[![hackmd-github-sync-badge](https://hackmd.io/6n9BD7AvRe-DNt8B3yqY5g/badge)](https://hackmd.io/6n9BD7AvRe-DNt8B3yqY5g)

# UVa 1056 - Degrees of Separation



## 問題
* 給你一堆人名，要你在這些人中找到 `最大分離程度(maximum degree of separation)`
* `分離程度 : 兩人的 shortest path`

## 想法
* 這題有夠難，我跟我們班大神討論後才知道想法
* 這邊就講解一下我遇到的瓶頸與想法
* 最主要就是要用 Floyd-Warshall Alogorithm，因為要算分離程度
* 事前準備作業是要先把名字用 id 替換掉，使得用 `adjacency matrix` 存放資料
  
![示意圖](https://i.imgur.com/MJ8ldwW.png)


* 注意到的是，因為它是無向圖(Undirected Graph)，所以用 `map<string, int>` 處理  
相鄰矩陣的時候同時把對稱邊賦值就可以 `dist[mp[name1]][mp[name2]] = dist[mp[name2]][mp[name1]] = 1`
* 接下來就是套 Floyd_Warshall 的模板
* 最後計算所有上半部的二維陣列中誰最大(只需要算上半部，因為另外一半對稱)

## Input
* 輸入每筆測資直到遇到兩個0
* 每筆測資開始兩個數字分別代表P個人，R個關係(relation)
* 接著輸入 R 個關係，每個關係都是兩個名字組成

## Output
* 如果有任何一組沒有跟其他人連在一起，就輸出 "DISCONNECTED"
* 都有連在一起，輸出最大的分離程度
* 每筆輸出 `後` 要空一行

## Sample Input
4 4  
Ashok Kiyoshi Ursala Chun Ursala Kiyoshi  
Kiyoshi Chun  
4 2  
Ashok Chun Ursala Kiyoshi  
6 5  
Bubba Cooter Ashok Kiyoshi Ursala Chun  
Ursala Kiyoshi Kiyoshi Chun  
0 0  

## Sample Output
Network 1: 2  

Network 2: DISCONNECTED  

Network 3: DISCONNECTED  

###### tags: `UVa question`