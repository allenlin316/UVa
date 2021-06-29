#include <iostream>
using namespace std;

int main()
{
    int daysOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string dayOfWeek[7] = {"Friday","Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    int testCase, month, day;
    int totalDays=0;
    cin >> testCase;
    while(testCase--){
        cin >> month >> day;
        totalDays = 0;

        if(month == 1)
            totalDays = day;
        else{
            for(int i=0; i<month-1; i++){
                totalDays += daysOfMonth[i];
            }
            totalDays += day;
        }
         totalDays = totalDays % 7;
        cout<<dayOfWeek[totalDays]<<endl;
    }
}
