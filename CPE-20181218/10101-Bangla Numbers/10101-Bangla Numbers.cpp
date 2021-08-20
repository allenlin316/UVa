#include <iostream>
#include <iomanip>
using namespace std;

void solve(long long int);

int main()
{
    long long int num;
    int caseNum=1;
    while(cin >> num){
        cout << setw(4) << caseNum++ << ".";
        if(num)
            solve(num);
        else
            cout << " 0";
        cout << endl;
    }
}

void solve(long long int num){
    if(num >= 10000000){
        solve(num/10000000);
        cout << " kuti";
        num%=10000000;
    }
    if(num >= 100000){
        solve(num/100000);
        cout << " lakh";
        num%=100000;
    }
    if(num >= 1000){
        solve(num/1000);
        cout << " hajar";
        num%=1000;
    }
    if(num >= 100){
        solve(num/100);
        cout << " shata";
        num%=100;
    }
    if(num){
        cout << " " << num;
    }
}
