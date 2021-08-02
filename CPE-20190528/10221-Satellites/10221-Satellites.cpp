#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = acos(-1);
const int earthRadius = 6440;

int main()
{
    double distance, angle;
    string unit;
    while(cin >> distance >> angle >> unit){
        if(unit == "min")   angle /= 60;
        if(angle > 180) angle = 360 - angle;
        double radian = (angle / 180) * PI;
        double totalRadius = distance + earthRadius;
        double arc = totalRadius * radian;
        double theOtherRadian = (180 - angle)*PI / 360;
        double chord = 2*(totalRadius) * sin(radian / 2);
        cout << fixed << setprecision(6) << arc << " " << chord << endl;
    }
}
