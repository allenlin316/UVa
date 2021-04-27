#include <iostream>
using namespace std;
int main()
{
    int addSpeed, time;
    int displacement;
    // 速度變化量/時間變化量=加速度
    while(cin>>addSpeed>>time){
        displacement=addSpeed*time*2;
        cout<<displacement<<endl;
    }
}
