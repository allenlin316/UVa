// Modified from UVa 389
#include <iostream>
#include <iomanip>
#include <sstream> // stringstream
#include <string> //stoi
using namespace std;

string solve(int,int);
void output(string);

int main()
{
    string input, initNumStr, originalBaseStr, resultBaseStr;
    stringstream ss;
    string result;
    int decimalNum, originalBase, resultBase;
    while(getline(cin, input)){
        ss.str("");
        ss.clear();
        ss << input;
        ss >> initNumStr >> originalBaseStr >> resultBaseStr;
        originalBase = stoi(originalBaseStr);
        resultBase = stoi(resultBaseStr);
        decimalNum = stoi(initNumStr, nullptr, originalBase);
        result = solve(decimalNum, resultBase);

        output(result);
    }
}

string solve(int decimalNum, int resultBase){
    char table[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string result="";
    while(decimalNum > 0){
        result = table[decimalNum%resultBase] + result;
        decimalNum/=resultBase;
    }


    return result;
}

void output(string str){
    string result ="";
    if(str.size() > 7){
        for(int i=str.size()-1; i>=str.size()-7; i--)
            result = str[i] + result;
    }
    else{
        for(int i=0; i<str.size(); i++)
            result += str[i];
    }

    cout << setw(7) << setfill('0') << result << endl;
}
