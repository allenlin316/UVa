[![hackmd-github-sync-badge](https://hackmd.io/OxQjonITS3qJwCwEtmOOGw/badge)](https://hackmd.io/OxQjonITS3qJwCwEtmOOGw)

# UVa 11417 - GCD



## 問題
* ![題目](https://i.imgur.com/chFgwAp.png) (節錄自[UVa](https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/11417.pdf))
* 題目還很好心把 sigma 的 `for-loop` 給你了
```cpp=
G = 0;
for(i=1;i<N;i++)
for(j=i+1;j<=N;j++)
{
    G+=GCD(i,j);
}
/*Here GCD() is a function that finds
the greatest common divisor of the two
input numbers*/
```
## 想法
* 可能比較有問題應該是 `GCD()` 吧
* 我是用 `輾轉相除法`，配合遞迴解的
* 每一次跑 `GCD()` 會先確保被除數大於除數

## Input 
* 輸入一個 N

## Output
* 求 G

## Sample Input
10  
100  
500  
0  
## Sample Output
67  
13015  
442011  

###### tags: `UVa question`
