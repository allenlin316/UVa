#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    /*
    �]��Ӿ��v��: winRate�A�h�鱼�����v��: q=1-winRate
    �]��N�Ӫ��a
    ��Ӿ��v:
        Round 1                                         Round 2
        1st player : winRate                     1st player : pow(q,N)*winRate
        2nd player : q*winRate               2nd player : pow(q,N+1)*winRate
        K player : pow(q,k-1)*winRate  K player : pow(q,N)*pow(q,k-1)*winRate
        �綠��: pow(q,N) ����L�a�żƩM: a1/(1-r)
    */
    int testCase, players, target, lostPlayer;
    double winRate, round1, roundN;
    cin>>testCase;
    while(testCase--){
        cin>>players>>winRate>>target;
        lostPlayer =target-1;
        round1=pow(1-winRate,lostPlayer)*winRate;
        if(winRate==0)
            cout<<double(0.0000)<<endl;
        else{
            roundN=round1/(1-pow(1-winRate,players));
            cout<<fixed<<setprecision(4)<<roundN<<endl;
        }
    }
}
