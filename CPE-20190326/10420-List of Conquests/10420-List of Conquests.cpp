#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> mp;
    int testCase;
    string country, name;
    cin >> testCase;
    while(testCase--){
        cin >> country;
        getline(cin, name);
        mp[country]++;
    }
    for(map<string,int>::iterator it = mp.begin(); it!=mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}
