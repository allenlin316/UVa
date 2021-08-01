#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    set<string> check;
    int testCase, tupleSize, num, total=0;
    string result="";
    bool isLoop, isZero;
    cin >> testCase;
    while(testCase--){
        cin >> tupleSize;
        check.clear();
        result = "";
        isZero = false;
        isLoop = false;
        int arr[tupleSize+1];
        for(int i=0; i<tupleSize; i++){
            cin >> arr[i];
            result += to_string(arr[i]);
        }
        check.insert(result);
        while(true){
            result = "";
            total = 0;
            arr[tupleSize] = arr[0];
            for(int i=0; i<tupleSize; i++){
                arr[i] = abs(arr[i] - arr[i+1]);
                total += arr[i];
                result += to_string(arr[i]);
            }
            if(total == 0){
                isZero = true;
                break;
            }
            if(check.count(result) >= 1){
                isLoop = true;
                break;
            }
            check.insert(result);
        }
        if(isLoop)
            cout << "LOOP" << endl;
        else if(isZero)
            cout << "ZERO" << endl;
    }
}
