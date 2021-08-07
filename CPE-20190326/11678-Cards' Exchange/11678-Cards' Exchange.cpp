#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int aliceCardNum, bettyCardNum, tmp, tradeCard;
    set <int> aliceCard;
    set <int> bettyCard;
    while(cin >> aliceCardNum >> bettyCardNum){
        if(aliceCardNum == 0 && bettyCardNum == 0)  break;
        aliceCard.clear();  bettyCard.clear();
        for(int i=0; i<aliceCardNum; i++){
            cin >> tmp;
            aliceCard.insert(tmp);
        }
        for(int j=0; j<bettyCardNum; j++){
            cin >>tmp;
            bettyCard.insert(tmp);
        }
        if(aliceCard.size() >= bettyCard.size()){
            tradeCard = bettyCard.size();
            for(set<int>::iterator it = aliceCard.begin(); it!= aliceCard.end(); it++){
                if(bettyCard.count(*it) >= 1){
                    tradeCard--;
                }
            }
        }  else{
             tradeCard = aliceCard.size();
             for(set<int>::iterator it = bettyCard.begin(); it!= bettyCard.end(); it++){
                if(aliceCard.count(*it) >= 1){
                    tradeCard--;
                }
            }
        }
        cout << tradeCard << endl;
    }
}
