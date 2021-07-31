#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string input, letter, answer;
    int testCase, wordNeed=0, caseNum=1;
    cin >> testCase;
    cin.get();  cin.get();
    while(testCase--){
        answer = "";
        while(getline(cin, input)){
            wordNeed = 0;
            if(input == "") break;
            stringstream ss;
            ss << input;
            while(ss >> letter){
                if(letter.size() <= wordNeed)   continue;
                answer += letter[wordNeed++];
            }
            answer += '\n';
        }
        if(caseNum != 1)  cout << endl;
        cout << "Case #" << caseNum++ <<":" << endl;
        cout << answer;
    }
}
