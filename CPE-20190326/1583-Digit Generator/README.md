
# UVa 1583 - Digit Generator

## 問題
* N 的 `digit-sum` 定義成 N 的每一位數加 N 自己本身
* 245 的 `digit-sum` 等於 256 (= 245 + 2 + 4 + 5)
* 給你 `digit-sum` 要求 N

## 想法
* 硬爆會 TLE，我看有滿多人都先建表，我上網有學到一個是不用建表，但又不會 TLE 的
* 看完題目測資會發現，要算的 N 與 `digit-sum` 不會差太多
* 按照題目意思，你會發現迴圈不需要從1開始算
* 迴圈從 `digit-sum 總共位數減掉9*總共位數` ，因為每一個位數最大是9
* 接下來就是慢慢算數值

## Sample Input
3  
216  
121  
2005  

## Sample Output
198  
0  
1979  

###### tags: `UVa question`