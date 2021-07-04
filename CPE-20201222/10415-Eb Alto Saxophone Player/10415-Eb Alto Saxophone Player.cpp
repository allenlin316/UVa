#include <iostream>
using namespace std;

int getNote(char);

int main()
{
    int testCase, noteNum;
    string song;
    string current = "0000000000";
    string note[15] = {" ","0111001111", "0111001110", "0111001100", "0111001000", "0111000000", "0110000000", "0100000000",
    "0010000000", "1111001110", "1111001100", "1111001000", "1111000000", "1110000000", "1100000000"}; // {'c','d','e','f','g','a','b','C','D','E','F','G','A','B'}

    cin >> testCase;
    cin.get();
    while(testCase--){
        getline(cin, song);
        current = "0000000000";
        int fingerNum[10] = {0,0,0,0,0,0,0,0,0,0};
        for(int i=0; i<song.size(); i++){
            noteNum = getNote(song[i]);
            for(int j=0; j<10; j++){
                if( (note[noteNum][j] != current[j]) && (current[j]=='0') ){
                    fingerNum[j]++;
                    current[j] = '1';
                }
                else if( (note[noteNum][j] != current[j]) && (current[j]=='1') ){
                    current[j] = '0';
                }
            }
        }
        for(int i=0; i<10; i++){
            if(!i)
                cout << fingerNum[i];
            else
                cout << " " << fingerNum[i];
        }
        cout << endl;
    }
}
int getNote(char ch){
    switch(ch){
        case 'c':
            return 1;
        case 'd':
            return 2;
        case 'e':
            return 3;
        case 'f':
            return 4;
        case 'g':
            return 5;
        case 'a':
            return 6;
        case 'b':
            return 7;
        case 'C':
            return 8;
        case 'D':
            return 9;
        case 'E':
            return 10;
        case 'F':
            return 11;
        case 'G':
            return 12;
        case 'A':
            return 13;
        case 'B':
            return 14;
    }
}
