#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(vector<string>,int);

int main()
{
    int num, length;
    vector<string> str;
    string temp;
    while(cin>>num){
        if(num==0)  break;
        cin.get();
        str.clear();
        for(int i=0; i<num; i++){
            getline(cin,temp);
            length=temp.size();
            for(int j=0; j<length; j++){
                if(temp[j]=='"' || temp[j]=='\\'){
                    temp.insert(j,"\\");
                    j++;
                    length++;
                }
            }
            str.push_back(temp);
        }

        print(str,num);
    }

}
void print(vector<string> str, int num){
    static int caseNum=1;
    cout<<"Case "<<caseNum++<<":"<<endl;
    cout<<"#include<string.h>\n"<<"#include<stdio.h>\n";
    cout<<"int main()\n"<<"{\n";
    for(int i=0; i<str.size(); i++){
        cout<<"printf(\""<<str[i]<<"\\n\");"<<endl;
    }
    cout<<"printf(\"\\n\");"<<endl;
    cout<<"return 0;"<<endl;
    cout<<"}"<<endl;
}
