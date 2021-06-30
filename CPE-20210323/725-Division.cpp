#include<iostream>
#include <iomanip>
using namespace std;

bool isRepeat(int,int);

int main()
{
    int N, downNum, upNum; //����&���l
    bool isAns, start=false;

    while(cin >> N){
        if(N==0)    break;
        if(start)   cout<<endl; //��X��
        isAns = false;
        start = true;

        for(int i=1234; i<49876; i++){  //50000*2�|�j�󤭦�ơA�̤j�S�����ƼƦr����49876
            downNum = i;
            upNum = downNum * N;
            if(upNum > 99999)
                break;
            else{
                if(!isRepeat(upNum, downNum)){
                    isAns = true;
                    cout<<setw(5)<<setfill('0')<<upNum<<" / ";
                    cout<<setw(5)<<setfill('0')<<downNum<<" = "<<N<<endl;
                }
            }
        }
        if(!isAns)
            cout<<"There are no solutions for "<<N<<"."<<endl;
    }
}

bool isRepeat(int upNum, int downNum){
    bool check[10]={false};

    if(upNum<10000 && downNum<10000) //�D�حn�D��(�u�঳�@�Ӭ��|���)
        return true;
    if(upNum < 10000 || downNum < 10000) //���@�ӥ|��ƥN���@�ӹs�Q�α��F
        check[0] = true;
    while(upNum>0){
        if(check[upNum%10])
            return true;
        else
            check[upNum%10] = true;
        upNum/=10;
    }
    while(downNum>0){
        if(check[downNum%10])
            return true;
        else
            check[downNum%10] = true;
        downNum/=10;
    }
    return false;
}
