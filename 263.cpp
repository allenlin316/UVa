#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
//#include<time.h>
using namespace std;

int chainLength=0;

bool descending(char,char);
int stringToInt(string);
int calAndPrint(int,int);
string intToString(int);

int main()
{
    //double START,END;
    bool flag=false;
    string sequence;
    vector<int>check;
    int decre, incre, result;
    while(cin>>sequence){
        //START=clock();
        if(sequence[0]=='0')
            break;
        flag=false;
        check.clear();
        chainLength=0;

        cout<<"Original number was "<<sequence<<endl;
        while(flag==false){
            sort(sequence.begin(),sequence.end(),descending);
            decre=stringToInt(sequence);
            sort(sequence.begin(),sequence.end());
            incre=stringToInt(sequence);
            result=calAndPrint(decre,incre);
            for(int i=0; i<check.size(); i++){
                if(result == check[i]){
                    flag=true;
                    break;
                }
            }
            check.push_back(result);
            sequence=intToString(result);
        }
        cout<<"Chain length "<<chainLength<<endl<<endl;
        //END=clock();
        //cout<<"Duration: "<<(END-START)/CLOCKS_PER_SEC<<endl;
    }
}
bool descending(char a, char b){
    if(a>b)
        return true;
    else
        return false;
}
int calAndPrint(int num1,int num2){
    int result=0;
    chainLength++;
    result=num1-num2;
    cout<<num1<<" - "<<num2<<" = "<<result<<endl;

    return result;
}
int stringToInt(string str){
    int num;
    stringstream s1;
    s1<<str;
    s1>>num;

    return num;
}
string intToString(int num){
    stringstream s1;
    string result;
    s1<<num;
    s1>>result;
//    while(num>=0){
//        result+=(num%10+'0');
//        num/=10;
//        if(num==0)
//            break;
//    }

    return result;
}
