[![hackmd-github-sync-badge](https://hackmd.io/c7pqwoTKSCS9Q44nNetvQQ/badge)](https://hackmd.io/c7pqwoTKSCS9Q44nNetvQQ)
# UVa 855 - Lunch in Grid City


## 問題
找出一個點 (x,y) 到各個已知座標距離加總起來要最小
## 想法
* 是一題高中數學的題目
* 中位數與平均數的概念就不多說，重點是 `中位數` 不會受到數列中極大值或極小值的影響   
>與各個地點的最小值加總 = sum(|x-x$_i$| + |y-y$_i$| ) = sum(|x-x$_i$|) + sum(|y-y$_i$|)   
即要求 $\sum_{}^{}$ |x - x$_i$| 與 $\sum_{}^{}$ |y - y$_i$|的最小值   
為取 x$_i$ 的中位數，即 x = x[n/2]、y = y[n/2]
* 要小心陣列是從0開始，奇數偶數的中位數算法不一樣

## Sample Input
2  
2 2 2  
1 1  
2 2  
7 7 11  
1 2  
1 7  
2 2  
2 3  
2 5  
3 4  
4 2  
4 5  
4 6  
5 3  
6 5  

## Sample Output
(Street: 1, Avenue: 1)  
(Street: 3, Avenue: 4)  

###### tags: `UVa question`