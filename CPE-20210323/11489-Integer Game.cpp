#include <iostream>
using namespace std;
/* 注意:
        可能遊戲一開始的時候，都沒有可以拿掉的digit (如 : 771)
        這樣的話就是T獲勝
    想法:
        每一個digit分別拿掉，剩下的digit作加總
        假如沒有可以拿掉的digit，就GameOver
        拿掉最後一個digit的人獲勝
*/
int main()
{
    int testCase, sumDigit=0, playerIndex=0, caseNum=1;
    bool found, GameOver;
    string num, takenDigit;
    cin >> testCase;
    while(testCase--){
        cin >> num;
        GameOver = false; //no one lose the game yet
        playerIndex = 0;      //odd index: player S、even index: player T

        while(num != ""){
            playerIndex++;
            found = false;

            for(int i=0; i<num.size(); i++){
                    takenDigit = num[i]; //沒有寫也沒關係，提醒自己某一個digit被做記號
                    sumDigit=0;

                    for(int j=0; j<num.size(); j++){
                        if(j==i)    continue;
                        sumDigit += (num[j]-'0');
                    }
                    if(sumDigit%3 == 0){
                        num.erase(i, 1);
                        found=true;
                        break;
                    }
            }
            if(!found){         //假如都沒被找到，如771
                 if(playerIndex%2 ==0)
                    cout << "Case " << caseNum++ << ": S" << endl;
                else
                    cout << "Case " << caseNum++ << ": T" << endl;
                GameOver = true;
                break;
            }
        }
        // 全部digit都拿掉了，所以拿掉最後一個digit的玩家獲勝
        if(playerIndex%2 ==0 && !GameOver)
            cout << "Case " << caseNum++ << ": T" << endl;
        else if (playerIndex%2!=0 && !GameOver)
            cout << "Case " << caseNum++ << ": S" << endl;
    }
}
