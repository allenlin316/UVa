# UVa 1368 - DNA Consensus String

## 問題
* 是一題高中生物題，雖然都忘了 XD
* 給定好幾個 DNA 序列，要找出與各個 DNA 序列相差最少的序列(consensus string)
* 白話來說就是你要找出所有給定序列中一樣的部分組成一個新的序列(即 consensus string)

## 想法
* 我剛學完 `map` 就想來實作看看，我發現序列中只有4個字母，即 A、C、G、T，剛好可以當作我的 `key`
* 我直接先用 `vector` 儲存所有的 DNA 序列
* 遍歷 `vector` 的所有字串中的字元，將出現的字元次數加一(這邊遍歷的迴圈我用的方式不太一樣)
* `map` 的 value 是放次數(每個字元出現的次數)
* 搞定次數後，再判定哪個字元出現的次數最多，就把它加到新序列(consensus string)中

## Input
* 第一行輸入代表有幾個測資
* 第二行有兩個數m、n，代表有 m 行 DNA 序列、每一行序列的長度為 n
* 接下來輸入 DNA 序列

## Output
* 輸出新的序列(consensus string)並與各個 DNA 序列的漢名碼距加總

## Sample Input  
3  
5 8  
TATGATAC  
TAAGCTAC  
AAAGATCC  
TGAGATAC  
TAAGATGT  
4 10  
ACGTACGTAC  
CCGTACGTAG  
GCGTACGTAT  
TCGTACGTAA  
6 10  
ATGTTACCAT  
AAGTTACGAT  
AACAAAGCAA    
AAGTTACCTT  
AAGTTACCAA  
TACTTACCAA  

## Sample Output
TAAGATAC  
7  
ACGTACGTAA  
6  
AAGTTACCAA  
12  

###### tags: `UVa question`