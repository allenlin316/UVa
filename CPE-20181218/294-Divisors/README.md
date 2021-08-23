
# UVa 294 - Divisors

## 問題
* 求出範圍內(包括邊界值)有最多因數的數，及求出最多有幾個因數
* 如果有一個數以上有一樣多因數，則求出數字最小又因數最多的

## 想法
* 因為題目有說他的下限跟上限最多差 10000
* 所以我們直接迴圈跑從下限到上限，看每一個數的因數個數
* 重要的點就是，檢查因數不用跑每一個數，只要跑到根號就好，因為過了根號就會是成對的

## Sample Input
3  
1 10  
1000 1000  
999999900 1000000000  

## Sample Output
Between 1 and 10, 6 has a maximum of 4 divisors.  
Between 1000 and 1000, 1000 has a maximum of 16 divisors.  
Between 999999900 and 1000000000, 999999924 has a maximum of 192 divisors.  

###### tags: `UVa question`