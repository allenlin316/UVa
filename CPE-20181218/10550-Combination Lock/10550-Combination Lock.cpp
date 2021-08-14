#include <iostream>
using namespace std;

int main()
{
    int num[4], angle, fiveRotate=1080;
    while(cin >> num[0] >> num[1] >> num[2] >> num[3]){
        if(num[0] == 0 && num[1] == 0 && num[2] == 0 && num[3] == 0)   break;
        angle = (num[0] - num[1] + 40)%40 + (num[2] - num[1] + 40)%40 +
                        (num[2] - num[3] + 40)%40;
        angle = angle*9 + fiveRotate;
        cout << angle << endl;
    }
}
