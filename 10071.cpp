#include <iostream>
using namespace std;
int main()
{
    int addSpeed, time;
    int displacement;
    // �t���ܤƶq/�ɶ��ܤƶq=�[�t��
    while(cin>>addSpeed>>time){
        displacement=addSpeed*time*2;
        cout<<displacement<<endl;
    }
}
