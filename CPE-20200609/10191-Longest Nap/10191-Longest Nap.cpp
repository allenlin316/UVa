#include <iostream>
#include <algorithm> // sort()
#include <cmath> // abs()
#include <string> //to_string()
#include <vector>
using namespace std;

struct Time{
    int startTime;
    int endTime;
};
bool compare(Time t1, Time t2);
void print(int startOfNap, int maxTime);

int main()
{
    int numThing;
    int h1, h2, m1, m2, startOfNap;
    char ignore;
    Time t;
    while(cin >> numThing){
        vector<Time> time;
        while(numThing--){
            cin >> h1 >> ignore >> m1 >> h2 >> ignore >> m2;
            t.startTime = h1*60 + m1;
            t.endTime = h2*60 + m2;
            time.push_back(t);
            while(cin.get() != '\n');
        }
        sort(time.begin(), time.end(), compare);
        int maxTime = 0; int last = 600;
        for(int i=0; i<time.size(); i++){
            if(abs(time[i].startTime - last) > maxTime ){
                maxTime = abs(time[i].startTime - last);
                startOfNap = last;
            }
            last = time[i].endTime;
        }
        if(abs(last - 18*60) > maxTime){
            maxTime = abs(last - 18*60);
            startOfNap = time[time.size()-1].endTime;
        }
        print(startOfNap, maxTime);
    }
}
bool compare(Time t1, Time t2){
    if(t1.startTime > t2.startTime)
        return false;
    return true;
}

void print(int startOfNap, int maxTime){
    static int dayCount=1;
    string startHour = to_string(startOfNap/60);
    string startMin = to_string(startOfNap%60);
    string resultStartNap = startHour + ":" + startMin;
    string resultEarnTime = to_string(maxTime%60) + " minutes.";

    if(maxTime/60 >= 1){
        resultEarnTime = to_string(maxTime/60) + " hours and " + to_string(maxTime%60) + " minutes.";
    }
    if(startOfNap%60 < 10){
        resultStartNap = startHour + ":0" + startMin;
    }

    cout << "Day #" << dayCount++ << ": " << "the longest nap starts at " << resultStartNap;
    cout << " and will last for " << resultEarnTime << endl;
}


