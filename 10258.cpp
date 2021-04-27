#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

struct Contestant
{
    int teamNum; //�ĴX����
    int questionNum; //�D��
    int error[10];
    int time;
    bool participate; //�O�_���ѥ[�{������
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
            if(coder[num].solved[problem]==true)  continue; //�ѧ��o�D�N�Хܰ���(�H��AC��S���s�e���~������)
            if(letter=='I'){
                coder[num].error[problem]++;
            }
            else if(letter=='C'){
                coder[num].time+=usedTime+coder[num].error[problem]*20; //�᪺�ɶ�
                coder[num].questionNum++; //�D��++
                coder[num].solved[problem]=true; //�ѧ�
            }
        }
        // sort rank (�D�ƥѦh���->�ɶ��Ѥp��j->������X�Ѥp��j)
        sort(coder, coder+110, compare);

        for(int i=0; i<110; i++){
            if(coder[i].participate) //���ѥ[�~��X(�]���}�C���}110��)
                cout<<coder[i].teamNum<<" "<<coder[i].questionNum<<" "<<coder[i].time<<endl;
        }
        if(testCase!=0) // output �ݭn
            cout<<endl;
    }
}
bool compare(Contestant a, Contestant b) {
    // sort �� compare �禡
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
