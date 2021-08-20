
# UVa 10101 - Bangla Numbers

## 問題
* 給一個數字，要用 bangla 標示
* 規則:
    * kuti = 10000000
    * lakh = 100000
    * hajar = 1000
    * shata = 100

## 想法
* 遞迴寫法，我參考網路上的
* 先用簡單的數字慢慢用遞迴跑，就會知道規律
* 就像找錢，先把大鈔找完，再用小抄補齊剩餘的數量
* 要注意如果測資是 0，才輸出零，其餘情況不會單獨輸出 0，畢竟找 0 元，就表示沒有找，不會給客人 0 元

## Sample Input
23764  
45897458973958  

## Sample Output (每一行 case number 前要空4格)
1. 23 hajar 7 shata 64  
2. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
