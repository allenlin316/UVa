#include <iostream>
using namespace std;
/* �`�N:
        �i��C���@�}�l���ɭԡA���S���i�H������digit (�p : 771)
        �o�˪��ܴN�OT���
    �Q�k:
        �C�@��digit���O�����A�ѤU��digit�@�[�`
        ���p�S���i�H������digit�A�NGameOver
        �����̫�@��digit���H���
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
        playerIndex = 0;      //odd index: player S�Beven index: player T

        while(num != ""){
            playerIndex++;
            found = false;

            for(int i=0; i<num.size(); i++){
                    takenDigit = num[i]; //�S���g�]�S���Y�A�����ۤv�Y�@��digit�Q���O��
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
            if(!found){         //���p���S�Q���A�p771
                 if(playerIndex%2 ==0)
                    cout << "Case " << caseNum++ << ": S" << endl;
                else
                    cout << "Case " << caseNum++ << ": T" << endl;
                GameOver = true;
                break;
            }
        }
        // ����digit�������F�A�ҥH�����̫�@��digit�����a���
        if(playerIndex%2 ==0 && !GameOver)
            cout << "Case " << caseNum++ << ": T" << endl;
        else if (playerIndex%2!=0 && !GameOver)
            cout << "Case " << caseNum++ << ": S" << endl;
    }
}
