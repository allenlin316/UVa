#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int testCase;
    int totalStreet, totalAvenue, friends, x, y;
    cin >> testCase;
    while(testCase--){
        cin >> totalStreet >> totalAvenue >> friends;
        vector<int>street;
        vector<int>avenue;
        for(int i=0; i<friends; i++){
            cin >> x >> y;
            street.push_back(x);
            avenue.push_back(y);
        }
        sort(street.begin(), street.end());
        sort(avenue.begin(), avenue.end());

        if(friends%2 == 0){
            cout << "(Street: " << street[friends/2-1] << ", Avenue: " << avenue[friends/2-1] << ")\n";
        }
        else{
            cout << "(Street: " << street[(friends+1)/2 - 1] << ", Avenue: " << avenue[(friends+1)/2 - 1]<< ")\n";
        }
    }
}
