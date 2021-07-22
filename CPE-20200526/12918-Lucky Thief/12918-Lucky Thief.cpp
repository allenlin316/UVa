#include <iostream>
using namespace std;

int main()
{
    int testCase;
    int key, house;
    long long int result;
    cin >> testCase;
    while(testCase--){
        cin >> key >> house;
        result = (house - key) * key + (key-1) * key * 1/2;
        cout << result << endl;
    }
}
