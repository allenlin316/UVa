# UVa 10415-Eb Alto Saxophone Player

## 問題
* 假設一首歌只會有14個音符(c,d,e,f,g,a,b,C,D,E,F,G,A,B)，每個音符的按法都不同  
* 求一首歌結束後每一隻手指頭分別要按(Press)幾次

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
