#include <iostream>
using namespace std;

string decode(string);

int main()
{
    string input, result="";
    while(getline(cin, input)){
        result = decode(input);
        cout << result << endl;
    }
}

string decode(string str){
    string result="";
    for(int i=0; i<str.size(); i++){
        result += str[i]-7;
    }

    return result;
}
