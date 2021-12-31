[![hackmd-github-sync-badge](https://hackmd.io/9akAela3S-WzT52w9V2NpQ/badge)](https://hackmd.io/9akAela3S-WzT52w9V2NpQ)
# UVa 536 - Tree Recovery





## 問題
* 一題要有前序、後序、中序概念的題目
* 題目給定前序中序，要你輸出後序
* 每個字串字母都只有一個，所以字串最長就26個字


## 想法
* 這題真的要感謝大神 Tony 的解釋，我才理解怎麼用遞迴解這一題
* 題目給 (前序,中序)，我們就把字串拆成前序中序的子字串，一直拆到剩一個字或是空字串(base case)就回傳
* 我們用圖來理解
* 程式步驟 (左子樹 > 右子數 > 根)
![示意圖](https://i.imgur.com/r3elz9R.png)
* 最好是用 Tree trace 一下遞迴的順序

###### tags: `UVa question`
