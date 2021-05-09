#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

void decimalToHexa(int);
void hexaToDecimal(string);

int main()
{
    string num;
    int hexa, deci;
    stringstream ss;
    while(cin>>num){
        ss.str("");
        ss.clear();
        if(num[0]=='-') break;
        if(num[1]=='x'){
            num = num.substr(2,num.size()-2);
            hexaToDecimal(num);
        }
        else{
            ss<<num;
            ss>>deci;
            decimalToHexa(deci);
        }
    }
}
void decimalToHexa(int decimal){
    string result="";
    int index;
    char table[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(decimal>0){
        index=decimal%16;
        result = table[index]+result;
        decimal/=16;
    }

    cout<<"0x"<<result<<endl;
}
void hexaToDecimal(string hexa){
    int power=0;
    int result=0;
    for(int i=hexa.size()-1; i>=0; i--){
        if(hexa[i]>='0' && hexa[i]<='9')
            result+=(hexa[i]-'0')*pow(16,power++);
        switch(hexa[i]){
            case 'A':
                result +=10*pow(16,power++);
                break;
            case 'B':
                result +=11*pow(16,power++);
                break;
            case 'C':
                result +=12*pow(16,power++);
                break;
            case 'D':
                result +=13*pow(16,power++);
                break;
            case 'E':
                result +=14*pow(16,power++);
                break;
            case 'F':
                result +=15*pow(16,power++);
                break;
            default :
                break;
        }
    }

    cout<<result<<endl;
}
