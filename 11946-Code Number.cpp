#include <iostream>
using namespace std;
int main()
{
    //A=4  //I=1
    //S=5   //O=0
    //T=7   //E=3
    //Z=2   //B=8
    //G=6   //P=9
    char wrd[10]={'O','I','Z','E','A','S','G','T','B','P'};
    string str="";
    int testCase;
    cin>>testCase;
    cin.get();
    for(int i=0; i<testCase; i++){
        while(getline(cin,str) && str.size()!=0){
            for(int i=0; i<str.size(); i++){
                if(str[i]>='0' && str[i]<='9'){
                    str[i]=wrd[str[i]-'0'];
                }
            }
            cout<<str<<endl;
        }
    }
}
