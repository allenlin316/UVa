#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int went, returned, cnt, index;
    vector<int> result;
    bool allSafe;
    while(cin >> went >> returned){
        vector<int> arrReturned(went+1, 0);
        result.clear();
        cnt = allSafe = 0;
        if(went == returned){
            allSafe = true;
        }
        for(int i=1; i<=returned; i++){
            cin >> index;
            arrReturned[index] = index;
        }
        //sort(arrReturned, arrReturned+returned);
        for(int i=1; i<=went; i++){
            if(arrReturned[i] == 0){
                result.push_back(i);
            }
        }
        if(allSafe)  cout << "*";
        else{
            for(int i=0; i<result.size(); i++){
                cout << result[i] << " ";
            }
        }
        cout << endl;
    }
}
