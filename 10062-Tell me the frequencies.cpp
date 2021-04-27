#include <iostream>
#include <vector>
using namespace std;
void mySort(vector<int>,vector<char>);
int main()
{
    vector<int>answer;
    vector<char>ch;
    string input;
    int printCount=0;
    int frequency=0;
    int index=0;
    char temp;
    while(getline(cin,input)){
        if(printCount>0)
            cout<<endl;
        vector<bool>check(input.size(),false);
        frequency=0;
        answer.clear();
        ch.clear();
        for(int i=0; i<input.size(); i++){
            frequency=0;
            if(check[i]!=true){
                temp=input[i];
                for(int j=i; j<input.size(); j++){
                    if(temp==input[j]){
                        frequency++;
                        check[j]=true;
                    }
                }
                ch.push_back(temp);
                answer.push_back(frequency);
            }
        }
        mySort(answer,ch);
        printCount++;
    }
}
void mySort(vector<int>times, vector<char>ch){
    char character;
    int temp=0;
    for(int i=times.size()-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(times[j]>times[j+1]){
                temp=times[j];
                times[j]=times[j+1];
                times[j+1]=temp;

                character=ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=character;
            }
            else if(times[j]==times[j+1]){
                if(ch[j]<ch[j+1]){
                    character=ch[j];
                    ch[j]=ch[j+1];
                    ch[j+1]=character;
                }
            }
        }
    }
    for(int i=0; i<times.size(); i++){
        cout<<int(ch[i])<<" "<<times[i]<<endl;
    }
}
