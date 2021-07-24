#include <iostream>
using namespace std;

int main()
{
    int h1, h2, min1, min2, result=0;

    while(cin >> h1 >> min1 >> h2 >> min2){
        if(h1==0 && h2 == 0 && min1 == 0 && min2 == 0)  break;
        if(h1 == 0) h1 = 24;    if(h2 == 0) h2 = 24;

        // it cross to the next day
        if(h2 < h1){
            result = (24-(h1-h2))*60 + (min2-min1);
        }
        else if(h2 == h1 && min2 < min1){
            result = 24*60 - (min1 - min2);
        }
        // the same day
        else{
            min1 = 60*h1 + min1;
            min2 = 60*h2 + min2;
            result = min2 - min1;
        }

        cout << result << endl;
    }
}
