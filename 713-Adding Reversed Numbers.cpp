#include <iostream>
using namespace std;

string myReverse(string);
string sum(string,string);

int main()
{
    int testCase;
    string str1,str2,result;
    cin>>testCase;

    while(testCase--){
            cin>>str1>>str2;
            str1=myReverse(str1);
            str2=myReverse(str2);
            result=sum(str1,str2);
            result=myReverse(result);

            cout<<result<<endl;
    }
}
string sum(string str1, string str2){
    int carry=0;
    int sum=0;
    string result="";
    // 變相同長度
    while(str1.size()!=str2.size()){
        if(str1.size()>str2.size())
            str2="0"+str2;
        else
            str1="0"+str1;
    }
    // 開始做加法
    for(int i=str1.size()-1; i>=0; i--){
        sum=(str1[i]-'0')+(str2[i]-'0')+carry;
        carry=sum/10;
        sum%=10;
        result=char(sum+'0')+result;
    }
    if(carry>0)
        result=char(carry+'0')+result;

    return result;
}
string myReverse(string str){
    string result="";
    bool check=false;
    for(int i=str.size()-1; i>=0; i--){
       if(str[i]=='0' && check==false)
            continue;
       else{
            check=true;
            result+=str[i];
       }
    }

    return result;
}
