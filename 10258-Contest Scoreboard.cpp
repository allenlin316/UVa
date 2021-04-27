#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

struct Contestant
{
    int teamNum; //第幾隊伍
    int questionNum; //題目
    int error[10];
    int time;
    bool participate; //是否有參加程式比賽
    bool solved[10];
};

bool compare(Contestant,Contestant);

int main()
{
    int testCase, num, problem, usedTime;
    int outputUse=0;
    char letter;
    stringstream ss;
    string str;
    Contestant coder[110]={0};

    cin>>testCase;
    cin.get();
    cin.get();
    while(testCase--){
        //initialize struct
        //temp.clear();
        for(int i=0; i<110; i++){
            coder[i].questionNum=0;
            coder[i].teamNum=i;
            coder[i].time=0;
            coder[i].participate=false;
            for(int j=0; j<10; j++){
                coder[i].error[j]=0;
                coder[i].solved[j]=false;
            }
        }

        while(getline(cin,str) && str!="") {
            ss.clear();
            ss<<str;
            ss>>num>>problem>>usedTime>>letter;

            coder[num].participate=true;
            if(coder[num].solved[problem]==true)  continue; //解完這題就標示做完(以防AC後又重新送錯誤的答案)
            if(letter=='I'){
                coder[num].error[problem]++;
            }
            else if(letter=='C'){
                coder[num].time+=usedTime+coder[num].error[problem]*20; //花的時間
                coder[num].questionNum++; //題數++
                coder[num].solved[problem]=true; //解完
            }
        }
        // sort rank (題數由多到少->時間由小到大->隊伍的號碼由小到大)
        sort(coder, coder+110, compare);

        for(int i=0; i<110; i++){
            if(coder[i].participate) //有參加才輸出(因為陣列有開110個)
                cout<<coder[i].teamNum<<" "<<coder[i].questionNum<<" "<<coder[i].time<<endl;
        }
        if(testCase!=0) // output 需要
            cout<<endl;
    }
}
bool compare(Contestant a, Contestant b) {
    // sort 的 compare 函式
    if(a.questionNum>b.questionNum)
        return true;
    if(a.questionNum<b.questionNum)
        return false;
    if(a.time>b.time)
        return false;
    if(a.time<b.time)
        return true;
    if(a.teamNum<b.teamNum)
        return true;
    return false;
}
