[![hackmd-github-sync-badge](https://hackmd.io/8FHrmzFdQeamVELI-H-Y3g/badge)](https://hackmd.io/8FHrmzFdQeamVELI-H-Y3g)

# UVa 11677 - Alarm Clock



## 問題
* 第一對時間(hour1,minute1)，第二對時間(hour2,minute2)  
* :warning: 可能跨天，所以要另外處理，還有0點要先換回24點會比較好做

## 想法
* 就直接解，沒有什麼訣竅，就先把hour的0點換回24點再做

## Sample Input
1 5 3 5  
23 59 0 34   
21 33 21 10  
0 0 0 0  

## Sample Output
120  
35  
1417  

###### tags: `UVa question`