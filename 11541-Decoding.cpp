#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void ansArr(int,vector<char>&,char);
void printAll(vector<char>);
int main()
{
    int num=0;
    //int cases=1;
    int digit=0;
    int power=0;
    string str="";
    vector<char> result;
    vector<char> input;
    cin>>num;
    while(num--){
        cin>>str;
        input.clear();
        result.clear();
        for(int i=0; i<str.size(); i++){
            input.push_back(str[i]); //輸入資料
        }
        for(int i=str.size()-1; i>=0; i--){
            if(input[i]>='0' && input[i]<='9'){
                    digit+=(input[i]-'0')*pow(10,power);
                    power++;
            }
            else if(input[i]>='A' && input[i]<='Z'){
                    ansArr(digit,result,input[i]); //digit(次數, result的vector, 字母)
                    digit=0;
                    power=0;
            }
        }
        printAll(result);
    }
}
void ansArr(int times, vector<char> &result, char letter){
    for(int i=0; i<times; i++){
        result.push_back(letter);
    }
}
void printAll(vector<char> result){
    //Case 1: AABBBBDAA
    static int cases=1;
    cout<<"Case "<<cases++<<": ";
    for(int i=result.size()-1; i>=0; i--){
        cout<<result[i];
    }
    cout<<endl;
}
