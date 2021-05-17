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
    sort(dict.begin(), dict.end(), compare);  //一次整理全部的字
    sortedDict = dict;  //dict 裡還是原本題目給的所有字，只是有排序
    for(int i=0; i<dict.size(); i++){
        sort(sortedDict[i].begin(), sortedDict[i].end(), compareChar); //sort each word(把每個單字都從A~Z小到大排序)
    }
    while(cin>>word){
        if(word=="XXXXXX")  break;
        words.push_back(word);
    }
    for(int i=0; i<words.size(); i++){
        sort(words[i].begin(), words[i].end(), compareChar); //排序每個字(排序概念同sortedDict)
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
// 排序每個字 (e.g. acb -> abc)
bool compareChar(char a, char b){
    if(a>b)
        return false;
    else
        return true;
}
// 排序每行字 (e.g. cbc、bac -> bac、cbc)
bool compare(string a, string b){
    if(a>b)
        return false;
    else
        return true;
}
