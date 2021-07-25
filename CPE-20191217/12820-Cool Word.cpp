#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int testCase, frequency, coolWord, caseNum=1;
    string input;
    while(cin >> testCase){
        coolWord = testCase; // assume all of the numbers are cool words

        while(testCase--){
            cin >> input;
            vector<int> check;
            map<char, int > mp;
            for(int i=0; i<input.size(); i++){
                mp[input[i]]++;
            }
            for(map<char,int>::iterator it = mp.begin(); it!=mp.end(); it++){
                check.push_back(it->second);
            }
            for(int i=0; i<check.size(); i++){
                frequency = count(check.begin(), check.end(), check[i]);
                if(frequency > 1 || check.size() == 1){
                    coolWord --;
                    break;
                }
            }
        }
        cout << "Case " << caseNum++ << ": " << coolWord << endl;
    }
}
