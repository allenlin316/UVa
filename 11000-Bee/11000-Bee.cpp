#include <iostream>
using namespace std;
int main()
{
    long long int male=0, female=0, maleTemp=0;
    int year=0;
    while(cin>>year){
        if(year==-1)  break;
        male = 0;
        female = 0;

        for(int i=0; i<=year; i++){
            maleTemp = female + male;
            female = male+1;
            male = maleTemp;
        }
        cout<<male<<" "<<female+male<<endl;
        // male female
// 0st    0          1
// 1st    1          1
// 2nd   2          2
    }
}
