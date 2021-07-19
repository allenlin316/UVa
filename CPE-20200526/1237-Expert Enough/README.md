
# UVa 1237 - Expert Enough?

## 問題
* 給了一堆車子品牌與價錢，及顧客的預算價錢
* 請問預算可以買哪種廠牌的車，如果超過一台或是預算不在車子的範圍內就不用理它

## 想法
* 這種題目用 `struct` 就會很好做，因為可以把題目給的測資拆解，比較好處理
* 把一台車的公司視為一個類別，它有汽車品牌(string)、價錢的下限(int)、價錢的上限(int)
* 這樣一來，我可以直接對車子做 `sort(Company)` 這樣一來價錢就會依小到大排好
* 接下來就是跑迴圈找需求價格界在車子價格區間的時候

## Sample Input
1  
4  
HONDA 10000 45000  
PEUGEOT 12000 44000  
BMW 30000 75900  
CHEVROLET 7000 37000   
4  
60000  
7500  
5000  
10000  

## Sample Output
BMW  
CHEVROLET  
UNDETERMINED  
UNDETERMINED  

###### tags: `UVa question`
  