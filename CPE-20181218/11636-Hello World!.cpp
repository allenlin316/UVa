#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, result, caseNum=1;
    while(cin >> n){
        if(n < 0) break;
        int result = ceil(log2(n));
        cout << "Case " << caseNum++ << ": " << result << endl;
    }
}
