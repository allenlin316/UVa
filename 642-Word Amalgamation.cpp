#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string,string);
bool compareChar(char,char);

int main()
{
    string dictWord, word;
    bool flag;
    vector<string>sortedDict;
    vector<string>dict;
    vector<string>words;
    while(cin>>dictWord){
        if(dictWord=="XXXXXX")  break;
        dict.push_back(dictWord);
    }
    sort(dict.begin(), dict.end(), compare);  //�@����z�������r
    sortedDict = dict;  //dict ���٬O�쥻�D�ص����Ҧ��r�A�u�O���Ƨ�
    for(int i=0; i<dict.size(); i++){
        sort(sortedDict[i].begin(), sortedDict[i].end(), compareChar); //sort each word(��C�ӳ�r���qA~Z�p��j�Ƨ�)
    }
    while(cin>>word){
        if(word=="XXXXXX")  break;
        words.push_back(word);
    }
    for(int i=0; i<words.size(); i++){
        sort(words[i].begin(), words[i].end(), compareChar); //�ƧǨC�Ӧr(�ƧǷ����PsortedDict)
    }
    for(int i=0; i<words.size(); i++){
        flag =false;
        for(int j=0; j<sortedDict.size(); j++){
            if(words[i]==sortedDict[j]){
                cout<<dict[j]<<endl;
                flag=true;
            }
        }
        if(!flag)
            cout<<"NOT A VALID WORD"<<endl;
        cout<<"******"<<endl;
    }
}
// �ƧǨC�Ӧr (e.g. acb -> abc)
bool compareChar(char a, char b){
    if(a>b)
        return false;
    else
        return true;
}
// �ƧǨC��r (e.g. cbc�Bbac -> bac�Bcbc)
bool compare(string a, string b){
    if(a>b)
        return false;
    else
        return true;
}
