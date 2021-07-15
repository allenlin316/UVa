#include <iostream>
#include <map>
#include <vector>
using namespace std;
/*
If the consensus error
between y and S is the minimum
among all possible strings y of length n, y
is called a consensus string of S
*/
int consensusErrorNum(vector<string> &sequence, string consensus);

int main()
{
    map<char, int> frequence;
    vector<string>sequence;
    string lineOfSeq, consensus="";
    char word;
    char ch[4] = {'A', 'C', 'G', 'T'}; // it's lexicographically order
    int testCase, length, numOfSeq, maximum, error;
    cin >> testCase;
    while(testCase --){
        cin >> numOfSeq >> length;
        // initialize all of variables and STL containers
        consensus="";  sequence.clear();    frequence.clear();  error=0;
        // input question
        for(int i=0; i<numOfSeq; i++){
            cin >> lineOfSeq;
            sequence.push_back(lineOfSeq);
        }

        for(int i=0; i<length; i++){
            frequence['A'] = 0; frequence['C'] = 0; frequence['G'] = 0; frequence['T'] = 0; // initialize frequencces of ACGT
            for(int j=0; j<numOfSeq; j++){
                frequence[sequence[j][i]] ++; // ︽︽ゑぃ琌ゑ
            }
            maximum = frequence[ch[0]];
            word = ch[0];
            // ㄓゑ ACGT 瞷Ω计
            for(int i=0; i<4; i++){
                if(frequence[ch[i]] > maximum){ // ぃノゑ单安常妓肈ヘ璶酚ㄥダ抖(代戈3)
                    maximum = frequence[ch[i]];
                    word = ch[i];
                }
            }
            consensus += word;
        }
        error = consensusErrorNum(sequence, consensus);
        cout << consensus << endl << error << endl;
    }
}

int consensusErrorNum(vector<string> &sequence, string consensus){
    int error=0;
    for(int i=0; i<sequence.size(); i++){
        for(int j=0; j<sequence[i].size(); j++){
            if(consensus[j] != sequence[i][j]){
                error ++;
            }
        }
    }
    return error;
}
