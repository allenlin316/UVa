#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long int xValue, coeValue, x=1, result=0;
    vector<long long int> coeList;
    string input;
    while(cin >> xValue){
        cin.get();
        coeList.clear();
        x=1;
        result=0;
        while(getline(cin , input)){
            stringstream ss;
            ss << input;
            while(ss >> coeValue){
                coeList.push_back(coeValue);
            }
            coeList.pop_back(); // when doing differential, the constant will be zero
            reverse(coeList.begin(), coeList.end());

            for(long long int i = 0; i < coeList.size(); i++){
                result += coeList[i] * (i+1) * x;
                x *= xValue;
            }
            cout << result << endl;
            break;
        }
    }
}
