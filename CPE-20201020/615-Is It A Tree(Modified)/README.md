# Modified from UVa 615 - Is It A Tree?
CPE 要多輸出 root

## 問題
* 就是二星題樹的題目，但並沒有簡單(XD)
* 我是參考我們班的大神解題思路才解出來的，老實說，他思考的很周全  
我覺得題目可能不會有的情況也考慮了
* 題目給了好幾 `對` 數字，每一對數字的第一個數是樹的父節點，接著的是他的子節點，要判斷這些數對組起來是不是一棵合法樹
* 樹的條件：  
    * 只有一個根節點(root)，大於一個就會變成森林(forest)
    * 所有的節點(node)都剛好有一條邊指到它，除了根節點(root)
    * 每一個節點都只有一條從根節點開始的路徑
    * 樹的結構中不能有迴圈(loop)

## 想法
* 這些想法都是大神的，如果看不懂我打的可以去看[他的講解](https://github.com/tony11306/practice/blob/main/uva/615%20-%20Is%20It%20A%20Tree%3F.md)
* 使用到了很多 `STL容器` ，最主要是 `map` 的概念，只能有一個 `key` ，所以我拿它來當接到的子節點
* 當我的 `key` 大於1個，代表這不是一棵合法樹(例如: 測資3)
* 接下來要看 root 會不會大於一個，用到 map 的概念，一直用 `key` 回推父節點(parent)   
當回推到沒有value可以跟key做配對時就存到 `set<int> rootSet` 裡面，最後再判斷 `set` 的大小就可以了
* 迴圈呢? 就是在檢查 root 時順便把檢查過的放進 `set<int> visitedNode` 裡，每次判斷node是不是已經有走過了
* 最後，假如是一棵合法樹，那 `set<int> rootSet` 裡只會有一個元素，也就是題目要求的 root 了

## Sample Input
6 8 5 3 5 2 6 4  
5 6 0 0  

8 1 7 3 6 2 8 9 7 5  
7 4 7 8 7 6 0 0  

3 8 6 8 6 4  
5 3 5 6 5 2 0 0  
-1 -1  

## Sample Output  
Case 1 is a tree. Root is 5.  
Case 2 is a tree. Root is 7.  
Case 3 is not a tree.  

###### tags: `UVa question`