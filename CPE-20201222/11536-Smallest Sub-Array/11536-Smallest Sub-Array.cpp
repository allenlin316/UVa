// UVa 11536
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> //min function
using namespace std;
int main()
{
    int testCase, m, n, k, caseNum=1;
    int cur, minLength, cnt=0; // current index, length of sub-sequence, count
    vector<int> sequence(1000001);
    sequence[1] = 1; sequence[2] = 2; sequence[3] = 3; //given condition

    cin >> testCase;

    while(testCase--){
        cin >> n >> m >> k;
        vector<int> last_pos(101,0);
        queue <int> subSeq;
        cnt = 0;
        minLength = n;


        for(int i=4; i<=n; i++){
            // make the sequence
            sequence[i] = (sequence[i-1]+sequence[i-2]+sequence[i-3])%m + 1;
        }

        for(int i=1; i<=n; i++){
            cur = sequence[i];
            if(cur>=1 && cur<=k){
                subSeq.push(i);

                if(last_pos[cur]==0)
                    cnt++;

                last_pos[cur] = i;

                /*if(subSeq.front() == subSeq.back()) // �o�Ӻ�k�|���C�@�Ӽƶiqueue�᳣����pop��(�ҥH����)
                    subSeq.pop();*/

                while( subSeq.front() != last_pos[sequence[subSeq.front()]] ) //�����󪺮ɭԪ�ܦP�˪��Ʀr���ƥX�{�F
                    subSeq.pop();

                if(cnt == k)
                    minLength = min(minLength, i-subSeq.front()+1);
            }
        }
        if(cnt == k)
            cout << "Case " << caseNum++ << ": " << minLength << endl;
        else
            cout << "Case " << caseNum++ << ": " << "sequence nai" << endl;
    }
}
