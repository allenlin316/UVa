[![hackmd-github-sync-badge](https://hackmd.io/PToJEyvqRh6Rah_WjOnsmQ/badge)](https://hackmd.io/PToJEyvqRh6Rah_WjOnsmQ)

# UVa 10415-Eb Alto Saxophone Player

## 問題
* 假設一首歌只會有14個音符(c,d,e,f,g,a,b,C,D,E,F,G,A,B)，每個音符的按法都不同  
* 求一首歌結束後每一隻手指頭分別要按(Press)幾次

## 想法
* 把每個音符的按法用字串呈現(1代表有按，0代表沒有按)創一個大小為14的陣列(因為有14個音符)
* 將初始狀態設為`current=0000000000`的一個字串(因為剛開始十隻手指頭都沒有按任何按鈕)
，再設定一個大小為10的陣列代表十隻手指頭的次數
* 跑迴圈判斷每一個字元與接下來要按的音符有沒有差異，如果有沒按到的就要把current的那個字元設為1 
且那一個手指的次數+1
* 注意: 假如是有按到，但下一個音符不需要，則需要把current的那個字元設為0，但不需要把手指次數做+1
(題目只是要問按下去而已)
---  

## 規則
音符: finger 有哪幾個手指頭要按
* c: finger 2∼4, 7∼10
* d: finger 2∼4, 7∼9
* e: finger 2∼4, 7, 8
* f: finger 2∼4, 7
* g: finger 2∼4
* a: finger 2, 3
* b: finger 2
* C: finger 3
* D: finger 1∼4, 7∼9
* E: finger 1∼4, 7, 8
* F: finger 1∼4, 7
* G: finger 1∼4
* A: finger 1∼3
* B: finger 1∼2

## Input
* 第一行輸入一個整數代表接下來會有幾個測資
* 接下來的每一行輸入只會有那14個音符，每一行輸入最多200個音符，最少0個

## Output
* 輸出每一行音樂，十隻手指頭分別會`按`幾次(注意是按下去才算)
* 每個數字用一個空格隔開

## Sample Input
3  
cdefgab  
BAGFEDC  
CbCaDCbCbCCbCbabCCbCbabae  

## Sample Output
0 1 1 1 0 0 1 1 1 1  
1 1 1 1 0 0 1 1 1 0  
1 8 10 2 0 0 2 2 1 0  
###### tags: `UVa question`
