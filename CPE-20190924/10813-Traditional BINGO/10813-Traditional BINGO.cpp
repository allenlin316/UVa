#include <iostream>
#include <utility> //pair STL
using namespace std;

int main()
{
     int testCase, playerNum, bingo, num, gameCount=0;
     bool found;
     cin >> testCase;
     while(testCase--){
        pair<int,int> arr[76];
        for(int i=1; i<=5; i++){
            for(int j=1; j<=5; j++){
                if(i==3 && j==3){
                    continue;
                }
                cin >> playerNum;
                arr[playerNum].first = i;
                arr[playerNum].second = j;
            }
        }
        int leftDiagonal = 0;
        int rightDiagonal = 0;
        num = 75;
        gameCount = 0;
        int row[6] = {0};
        int col[6] = {0};
        found = false;
        while(num--){
            cin >> bingo;
            gameCount++;
            if(found){
                continue;
            }
            if(arr[bingo].first == 0 && arr[bingo].second == 0){
                continue;
            }
            row[arr[bingo].first]++;
            col[arr[bingo].second]++;
            if(arr[bingo].first == arr[bingo].second){
                leftDiagonal++;
            }
            if(arr[bingo].first + arr[bingo].second == 6){
                rightDiagonal++;
            }
            if(leftDiagonal == 4 || rightDiagonal == 4){
                found = true;
            }
            for(int i=1; i<=5; i++){
                if(i == 3 && row[i] == 4)
                    found = true;
                if(i == 3 && col[i] == 4)
                    found = true;
                if(row[i] == 5 || col[i] == 5)
                    found = true;
            }
             if(found){
                cout << "BINGO after " << gameCount << " numbers announced" << endl;
            }
        }
     }
}
