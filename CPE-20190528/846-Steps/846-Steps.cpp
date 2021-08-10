#include <iostream>
using namespace std;

int main()
{
    int testCase, x, y, steps, length, distance;
    long long int sum;
    cin >> testCase;
    while(testCase--){
        cin >> x >> y;
        steps = sum = length = 0;
        distance = y - x;
        while(true){
            length++;
            if(sum + 2*length >= distance)    break;
            sum += 2*length;
            steps+=2;
        }
        if(x == y) cout << "0" << endl;
        else if(sum + length >= distance)    cout << steps+1 << endl;
        else    cout << steps + 2 << endl;
    }
}
