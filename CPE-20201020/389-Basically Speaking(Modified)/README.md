# Modified from UVa 389 - Basically Speaking

## 問題
* 進制轉換(可能的進制範圍從2~16)

## 想法
* 好像有更快的方法，但我沒有想到，所以我手刻進制轉換
* 使用到 [stoi](https://www.cplusplus.com/reference/string/stoi/)、[sstream](https://www.cplusplus.com/reference/sstream/stringstream/)、[setw](https://www.cplusplus.com/reference/iomanip/setw/)、[setfill](http://www.cplusplus.com/reference/iomanip/setfill/)
* 先把問題的數字轉成10進位，再透過除法轉成目標進制

## Input
* 題目給定每一行會有一個進制要轉換
* 每一行會有三個數，分別為 `要你轉的數` 、 `要你轉的進制` 、 `目標進制`
* 讀到 EOF

## Output
* 如果答案小於7位要在前面補0
* 大於7位，就只要輸出最後7位就好

## Sample Input
1111000 2 10  
1111000 2 16  
2102101 3 10  
2102101 3 15  
12312 4 2  
1A 15 2  
ABCD 16 15  
03 13 10  

## Sample Output  
0000120  
0000078  
0001765  
00007CA  
0110110  
0011001  
000D071  
0000003  