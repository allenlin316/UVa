#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int testCase, frequency, caseNum=1;
    string decoded, input;
    char ch;
    cin >> testCase;
    cin.get();
    while(testCase--){
        stringstream ss;
        decoded="";
        getline(cin, input);
        ss << input;
        while(ss >> ch >> frequency){
            while(frequency--){
                decoded += ch;
            }
        }
        cout << "Case " << caseNum++ << ": " << decoded << endl;
    }
}
