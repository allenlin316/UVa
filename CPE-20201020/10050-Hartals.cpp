#include <iostream>
using namespace std;
// start the simulation on a Sunday, no hartals on Fridays and Saturdays
int main()
{
    int testCase, days, numOfParties, hartal;
    int loseDays=0;
    cin >> testCase;
    while(testCase--){
        cin >> days >> numOfParties;
        loseDays=0;
        bool tableDay[days+1] = {false}; // the reason I plus one because I want to use the array starting from one

        for(int i=1; i<=numOfParties; i++){
            cin >> hartal;
            if(hartal==0)   continue; //when hartal is zero, no losing days, and cannot enter the following loop
            for(int j=hartal; j<=days; j+=hartal){
                if(j%7==6 || j%7==0)
                    continue;
                tableDay[j] = true;
            }
        }
        for(int i=1; i<=days; i++){
            if(tableDay[i])
                loseDays++;
        }
        cout << loseDays << endl;

    }
}
