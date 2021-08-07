#include <iostream>
using namespace std;

int countDigit(int);

int main()
{
     int testCase, num, sum, value;
     bool found;
     cin >> testCase;
     while(testCase--){
        cin >> num;
        found = false;
        int digitNum = countDigit(num);

        for(int i = (num - 9*digitNum); i < num; i++){
            sum = 0;
            value = i;
            sum += value;
            while(value > 0){
                sum += value%10;
                value/=10;
            }
            if(sum == num){
                found = true;
                cout << i << endl;
                break;
            }
        }
        if(!found)   cout << "0" << endl;
     }
}

int countDigit(int n){
    int digitNum=0;
    while(n > 0){
        n/=10;
        digitNum++;
    }
    return digitNum;
}
