#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void sorting(vector<string>&phone);
bool analysis(string,string);

int main()
{
    int testCase, numOfPhone;
    bool check=false;
    string phoneNum, phoneCom, phoneTarget;
    vector<string>phone;
    cin>>testCase;

    while(testCase--) {
        cin>>numOfPhone;
        phone.clear();
        check=false;

        for(int i=0; i<numOfPhone; i++){
            cin>>phoneNum;
            phone.push_back(phoneNum);
        }
        sort(phone.begin(),phone.end());

        for(int i=0; i<phone.size()-1; i++){
            if(check==true)
                break;
            for(int j=i+1; i<phone.size(); j++){
                if(phone[j].compare(0,phone[i].size(),phone[i])==0)
                    check=true;
                    break;
            }
        }
        if(check)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

