#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<bool>flag(100, true);
    vector<int>prime;
    flag[0] = flag[1] = false;

    for(int i=2; i<=10; i++){
        if(flag[i]){
            for(int j=i*i; j<=100; j+=i){
                flag[j] = false;
            }
        }
    }
    for(int i=2; i<100; i++){
        if(flag[i])
            prime.push_back(i);
    }
    for(auto y: prime){
        cout << y << "\t";
    }
}
