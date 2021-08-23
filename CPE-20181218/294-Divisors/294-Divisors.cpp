#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int testCase;
    int lower, upper, cnt=0, targetNum, maxDivisor;
    cin >> testCase;
    while(testCase--){
        cin >> lower >> upper;
        maxDivisor = 0;
        for(int i=lower; i<=upper; i++){
            cnt = 0;
            for(int j=1; j<=int(sqrt(i)); j++){
                if(i%j == 0){
                    cnt++;
                    if(j < sqrt(i)) cnt++;
                }
            }
            if(maxDivisor < cnt){
                maxDivisor = cnt;
                targetNum = i;
            }
        }
        cout << "Between " << lower << " and " << upper << ", " << targetNum << " has a maximum of ";
        cout << maxDivisor << " divisors." << endl;
    }
}
