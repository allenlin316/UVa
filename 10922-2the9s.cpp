#include <iostream>
#include <sstream>
using namespace std;

int isNine(string,int);

int main()
{
    // 999999999999999999999 = 189 -> 1+8+9 = 18 -> 1+8 = 9 所以它是9的倍數
    string num;
    int times=0;
    while(cin>>num){
        if(num=="0") break;
        times=0;
        if(isNine(num,times)!=0)
            cout<<num<<" is a multiple of 9 and has 9-degree "<<isNine(num,times)<<"."<<endl;
        else
            cout<<num<<" is not a multiple of 9."<<endl;
    }
}
int isNine(string num,int times){
    string digitSum="";
    stringstream ss;
    ss.str("");
    ss.clear();
    int sumOfDigit=0;

    for(int i=0; i<num.size(); i++){
        sumOfDigit+=(num[i]-'0');
    }
    if(sumOfDigit==9)
        return times+1; // 9自己本身也算
    if(sumOfDigit%9==0){
        times++;
        ss<<sumOfDigit;
        ss>>digitSum;
        return isNine(digitSum,times);
    }
    else
        return times;
}
