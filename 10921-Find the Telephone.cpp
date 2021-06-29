#include <iostream>
using namespace std;

int main()
{
    string input, result="";
    while(cin >> input){
        result="";
        for(int i=0; i<input.size(); i++){
            switch(input[i]){
                case 'A':   case 'B':   case 'C':
                    result += '2';
                    break;
                case 'D':   case 'E':   case 'F':
                    result += '3';
                    break;
                case 'G':   case 'H':    case 'I':
                    result +='4';
                    break;
                case 'J':   case 'K':   case 'L':
                    result += '5';
                    break;
                case 'M':   case 'N':   case 'O':
                    result += '6';
                    break;
                case 'P':   case 'Q':
                case 'R':   case 'S':
                    result += '7';
                    break;
                case 'T':   case 'U':    case 'V':
                    result += '8';
                    break;
                case 'W':   case 'X':
                case 'Y':    case 'Z':
                    result += '9';
                    break;
                case '1':
                    result += '1';
                    break;
                case '-':
                    result += '-';
                    break;
                case '0':
                    result += '0';
                    break;
            }
        }
        cout<<result<<endl;
    }
}
