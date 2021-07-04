#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool>tablePrime(10000000, true);
set<int>prime;
void buildTablePrime();
void solve(string);

int main()
{
    buildTablePrime();
    int testCase;
    cin >> testCase;
    while(testCase--){
        string str;
        prime.clear();
        cin >> str;
        sort(str.begin(), str.end());
        solve(str);
        cout << prime.size() << endl;
    }
    return 0;
}

void solve(string str){
    for(int i=0; i<str.size() && str.size()>1; i++){
        solve(str.substr(0, i) + str.substr(i+1, str.size()-i-1));
    }
    do{
        if(tablePrime[stoi(str)]){
            prime.insert(stoi(str));
        }
    }while(next_permutation(str.begin(), str.end()));

    return;
}

void buildTablePrime(){

    tablePrime[0] = tablePrime[1] = false;
    for(int i=2; i*i<=10000000; i++){
        if(tablePrime[i]){
            for(int j=i*i; j<=10000000; j+=i)
                tablePrime[j] = false;
        }
    }

    return;
}
