#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Company{
    string name;
    int lowestPrice;
    int highestPrice;
};
bool mycompare(Company, Company);

int main()
{
    int testCase, dataBaseSize, numOfQuery, outputUse=0;
    bool moreThanOne;
    vector<string> answer;
    cin >> testCase;

    while(testCase--){
        if(outputUse++ != 0)  cout << endl;
        cin >> dataBaseSize;
        Company company[dataBaseSize];
        for(int i=0; i<dataBaseSize; i++){
            cin >> company[i].name >> company[i].lowestPrice >> company[i].highestPrice;
        }

        sort(company, company+sizeof(company)/sizeof(Company), mycompare);

        cin >> numOfQuery;
        int queryPrice[numOfQuery];
        for(int i=0; i<numOfQuery; i++){
            cin >> queryPrice[i];
        }
        for(int i=0; i<numOfQuery; i++){
            answer.clear();
            moreThanOne = false;
            for(int j=0; j<dataBaseSize; j++){
                if(queryPrice[i] >= company[j].lowestPrice && queryPrice[i] <= company[j].highestPrice ){
                    if(answer.size() >= 1){
                        moreThanOne = true;
                        break;
                    }
                    answer.push_back(company[j].name);
                }
            }
            if(moreThanOne || answer.size() == 0)
                cout << "UNDETERMINED" << endl;
            else
                cout << answer[0] << endl;
        }
    }
}
bool mycompare(Company c1, Company c2){
    if(c1.lowestPrice < c2.lowestPrice)
        return true;
    return false;
}
