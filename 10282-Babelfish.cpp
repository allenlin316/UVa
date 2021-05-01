#include <iostream>
#include <map>
#include <sstream>
//#include <algorithm>
using namespace std;
int main()
{
    map<string,string> mapDict;
    map<string,string>::iterator it;
    stringstream ss;
    string temp, inputWord, inputEng, inputDia;
    while(getline(cin,temp)){
        if(temp=="")    break;
        ss.str("");
        ss.clear();

        ss<<temp;
        ss>>inputEng>>inputDia;
        mapDict.insert(pair<string,string>(inputDia,inputEng));
    }
    while(getline(cin,inputWord)){
        it = mapDict.find(inputWord);
        if(it!=mapDict.end())
            cout<<it->second<<endl;
        else
            cout<<"eh"<<endl;
    }
}
