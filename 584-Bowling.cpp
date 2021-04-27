#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string input;
    vector<int>score;
    int result=0;
    int frame=0;
    while(getline(cin,input)){
        if(input=="Game Over")
            break;
        score.clear(); //initialize
        frame=0;
        result=0;
        for(int i=0; i<input.size(); i++){
            if(input[i]=='X')
                score.push_back(10);
            else if(input[i]=='/')
                score.push_back(10-score[score.size()-1]);
            else if(input[i]==' ')
                continue;
            else
                score.push_back(input[i]-'0');
        }
        // 以每個frame做計算
        for(int i=0; i<score.size(); i++){
            if(frame==10)
                break;
            if(score[i]==10){
                result+=score[i]+score[i+1]+score[i+2];
                frame++;
            }
            else if(score[i]+score[i+1]==10){
                result+=score[i]+score[i+1]+score[i+2];
                i++;
                frame++;
            }
            else{
                result+=score[i]+score[i+1];
                i++;
                frame++;
            }
        }
        cout<<result<<endl;
    }
}
