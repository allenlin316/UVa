#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

const int MAX = 0x3f3f3f3f;
int **dist;
void init(int);
void floydWarshall(int );

int main()
{
    map<string, int> mp;
    string name1, name2;
    int numOfPeople, numOfRelation, id, ans, networkCount=1;
    while(cin >> numOfPeople >> numOfRelation){
        if(numOfPeople == 0 && numOfRelation == 0)    break;
        init(numOfPeople);
        mp.clear();
        id = ans = 0;
        for(int i=0; i<numOfRelation; i++){
            cin >> name1 >> name2;
            if(mp.count(name1) == 0){
                mp[name1] = id;
                id++;
            }
            if(mp.count(name2) == 0){
                mp[name2] = id;
                id++;
            }
            dist[mp[name1]][mp[name2]] = dist[mp[name2]][mp[name1]] = 1;
        }
        floydWarshall(numOfPeople);

        for(int i=0; i<numOfPeople; i++)
            for(int j=i+1; j<numOfPeople; j++)
                if(ans < dist[i][j])
                    ans = dist[i][j];

        cout << "Network " << networkCount++ << ": ";
        if(ans < MAX)   cout << ans << endl << endl;
        else    cout << "DISCONNECTED" << endl << endl;
    }

}

void init(int p){
    int **arr = new int *[p];
    for(int i=0; i<p; i++){
        arr[i] = new int [p];
    }
    for(int i=0; i<p; i++)
        for(int j=0; j<p; j++)
            arr[i][j] = MAX;

    dist = arr;
}

void floydWarshall(int n){
    for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
}
