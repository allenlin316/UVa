#include <iostream>
using namespace std;

int main()
{
    int owned, bottle, required, testCase, drink=0;
    cin >> testCase;
    while(testCase--){
        cin >> owned >> bottle >> required;
        drink=0;
        bottle = bottle + owned;

        while(bottle >= required){
            drink += bottle / required;
            bottle = bottle/required + bottle%required; //�ܧ����W����+�S������ѤU��
        }

        cout << drink <<endl;
    }
}
