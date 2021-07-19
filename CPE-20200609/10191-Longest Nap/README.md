
# UVa 10191 - Longest Nap

## 問題
* 給一個 schedule 要你計算從 10:00 ~ 18:00 之間他最多可以休息多久
* 注意是之間，所以如果 10:00 到 13:00 之間都沒事情的話，也可以休息喔

## 想法
* 使用到 struct 把題目拆解，不會太多變數要處理(把每個行程的時間開始跟結束寫成一個結構)
* 給定的 schedule 不會照時間早晚排好，要自己排
* 要判斷 10:00 跟 18:00 的時間，跑迴圈比較大小值
* 答案要注意如果大於等於60分鐘要輸出幾小時、幾分鐘

## Sample Input
4   
10:00 12:00 Lectures  
12:00 13:00 Lunch, like always.  
13:00 15:00 Boring lectures...  
15:30 17:45 Reading  
4  
10:00 12:00 Lectures  
12:00 13:00 Lunch, just lunch.  
13:00 15:00 Lectures, lectures... oh, no!  
16:45 17:45 Reading (to be or not to be?)  
4  
10:00 12:00 Lectures, as everyday.  
12:00 13:00 Lunch, again!!!  
13:00 15:00 Lectures, more lectures!  
15:30 17:15 Reading (I love reading, but should I schedule it?)  
1  
12:00 13:00 I love lunch! Have you ever noticed it? :)  

## Sample Output  
Day #1: the longest nap starts at 15:00 and will last for 30 minutes.  
Day #2: the longest nap starts at 15:00 and will last for 1 hours and 45 minutes.  
Day #3: the longest nap starts at 17:15 and will last for 45 minutes.  
Day #4: the longest nap starts at 13:00 and will last for 5 hours and 0 minutes.  

###### tags: `UVa question`