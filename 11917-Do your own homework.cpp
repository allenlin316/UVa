#include <iostream>
using namespace std;

struct homework
{
    string subject[110];
    int days[110];
};

int main()
{
    int testCase, subjects, dueDay, caseNum=1;
    string dueSubject;
    bool submit;
    cin>>testCase;
    while(testCase--){
        cin>>subjects;
        homework hw;
        submit=false;

        for(int i=0; i<subjects; i++){
            cin>>hw.subject[i]>>hw.days[i];
        }
        cin>>dueDay>>dueSubject;

        for(int i=0; i<subjects; i++){
            if(dueSubject==hw.subject[i]){
                if(dueDay >= hw.days[i]){
                    cout<<"Case "<<caseNum++<<": Yesss"<<endl;
                    submit = true;
                    break;
                }
                else if(dueDay+5 >= hw.days[i]){
                    cout<<"Case "<<caseNum++<<": Late"<<endl;
                    submit = true;
                    break;
                }
            }
        }
        if(!submit)
            cout<<"Case "<<caseNum++<<": Do your own homework!"<<endl;
    }
}
