#include <iostream>
using namespace std;

const double A[3] = {0.1, 0.06, 0.02};
const double B[3] = {0.25, 0.15, 0.05};
const double C[3] = {0.53, 0.33, 0.13};
double D[3] = {0.87, 0.47, 0.17};
double E[3] = {1.44, 0.8, 0.3};

int main()
{
    int time[4] = {480, 1080, 1320, 480};
    string phone, chargeStep;
    int startHour, endHour, startMin, endMin;
    int startCall, endCall;
    int result[4] = {0};

    while(cin >> chargeStep >> phone >> startHour >> startMin >> endHour >> endMin){
        if(chargeStep == "#")   break;
        startCall = startHour*60 + startMin;
        endCall = endHour*60 + endMin;
        for(int i=0; i<4; i++){
            if(time[i] > startCall){
                result[i] += time[i] - startCall;
                break;
            }
        }
        for(int i=0; i<4; i++){
            if(time[i] > endCall){
                result[i] += time[i] - endCall;
                break;
            }
        }

    }
}
