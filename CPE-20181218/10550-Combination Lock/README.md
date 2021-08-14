[![hackmd-github-sync-badge](https://hackmd.io/XaXvjgEWSOaoqBRIFbYKtQ/badge)](https://hackmd.io/XaXvjgEWSOaoqBRIFbYKtQ)

# UVa 10550 - Combination Lock



## 問題
* 美國很常用的鎖，密碼有三個號碼分別為 0~39。解開密碼要透過以下規則
    1. 順時針轉 2 圈整後，繼續轉直到停在第 1 個密碼
    3. 逆時針轉一圈整後，繼續轉直到停在第 2 個密碼
    4. 順時針轉到第 3 個密碼

## 想法
* 要搞清楚號碼大小的走向會隨著順逆時針而不一樣
* 不管密碼多少一定會轉 1080 度(因為順時針 2 圈、逆時針 1 圈)
* 直接用第一個測資計算，但是記得要加 `mod40` 因為很有可能別的測資會讓數字超過 40

## Sample Input
0 30 0 30  
5 35 5 35  
0 20 0 20  
7 27 7 27  
0 10 0 10  
9 19 9 19  
0 0 0 0  

## Sample Output
1350  
1350  
1620  
1620  
1890   
1890  

###### tags: `UVa question`
