#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numSol, numInput;
    int totalChar=0, runIndex=0;
    string lineSol="", lineOutput="", input="";

    while(cin >> numSol){
        cin.get();
        if(numSol == 0)   break;
        runIndex++;
        totalChar= 0;

        for(int i=0; i<numSol; i++){
            getline(cin, input);
            totalChar += input.size();
            if(!i){
                lineSol = input;
            }
            else{
                input = input + '\n';
                lineSol += input;
            }
        }
        cin >> numInput;
        cin.get();
        for(int i=0; i<numInput; i++){
            getline(cin, input);
            if(!i){
                lineOutput = input;
            }
            else{
                input = input + '\n';
                lineOutput += input;
            }
        }
        if(lineSol == lineOutput){
            cout << "Run #" << runIndex << ": Accepted " << totalChar << endl;
            continue;
        }
        for(int i=0; i<lineSol.size(); i++){
            if(lineSol[i]==' ' || lineSol[i]=='\n'){
                lineSol.erase(i, 1);
                i--;
            }
        }

        for(int i=0; i<lineOutput.size(); i++){
            if(lineOutput[i]==' ' || lineOutput[i]=='\n'){
                lineOutput.erase(i, 1);
                i--;
            }
        }
        if(lineSol == lineOutput)
            cout << "Run #" << runIndex << ": Presentation Error "  << totalChar << endl;
        else
            cout << "Run #" << runIndex << ": Wrong Answer "  << totalChar << endl;
    }
}
