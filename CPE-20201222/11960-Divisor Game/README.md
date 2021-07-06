[![hackmd-github-sync-badge](https://hackmd.io/FxvcDf2OSIqkd2gwVmBKSA/badge)](https://hackmd.io/FxvcDf2OSIqkd2gwVmBKSA)
# UVa 11960-Divisor Game


## 問題
* 給定一個數N，不大於N的情況下，找到最大的值其有最多因數

## 想法
* 先建所有因數表(範圍: 1 $\le$ N $\le$ $10^6$)
* 建立每一個數`N`的最大值索引值的表，即在不大於`N`的情況下，其最大值所在的`index`
也就是答案。好難敘述，我直接貼上程式碼 
```cpp=
for(int i=3; i<1000001; i++){
        if(numFactor[i] >= maximum){
            maximum = numFactor[i];
            index = i;
        }
        maxNum[i] = index;
    }
```
## Input
* 給定一個數T代表將會有幾行測資，接下來每一行會有一個數N

## Sample Input
3  
1  
10  
37  

## Sample Output
1  
10  
37  

###### tags: `UVa question`