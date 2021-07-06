#include <iostream>
#include <vector>
using namespace std;

void buildFactor();
vector <int> numFactor(1000001, 1);
vector <int> maxNum(1000001, 1);

int main()
{
    buildFactor();
    int testCase, num;
    cin >> testCase;
    while(testCase--){
        cin >> num;
        cout << maxNum[num] <<endl;
    }
}

void buildFactor(){
    int maximum = numFactor[1];
    int index;   maxNum[2] = 2;

    for(int i=2; i<1000001; i++){
        for(int j=i; j<1000001; j+=i){ // this way the number i will be one of j's factor
            numFactor[j]++;
        }
    }

    for(int i=3; i<1000001; i++){
        if(numFactor[i] >= maximum){
            maximum = numFactor[i];
            index = i;
        }
        maxNum[i] = index;
    }
}
