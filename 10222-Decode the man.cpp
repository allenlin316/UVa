#include <iostream>
using namespace std;
string toLower(string);
int main()
{
    string str;
    string ans="";
    string keyboard="=-0987654321`\][poiuytrewq';lkjhgfdsa/.,mnbvcxz";
    getline(cin,str);
        // k[r dyt I[o
    ans="";
    str=toLower(str);
    for(int i=0; i<str.size(); i++){
        for(int j=0; j<keyboard.size(); j++){
            if(str[i]==keyboard[j])
                ans+=keyboard[j+2];
            else if(str[i]==' '){
                ans+=" ";
                break;
            }
        }
    }
    cout<<ans<<endl;
}
string toLower(string str){
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]-'A'+'a';
    }
    return str;
}
