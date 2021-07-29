#include <iostream>
using namespace std;

int main()
{
    int testCase, current, times, treeDepth;
    cin >> testCase;
    while(testCase--){
        cin >> treeDepth >> times;
        current = 1;
        for(int i = 1; i<treeDepth; i++){
            if(times%2 == 0){
                // right
                current = (current*2)+1;
                times /= 2;
            } else{
                // left
                current *= 2;
                times = (times+1)/2;
            }
        }
        cout << current << endl;
    }
}
