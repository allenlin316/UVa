// Modified from UVa 615
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

bool isTree(map<int, vector<int> > &edges);
set<int> rootSet;

int main()
{
   int key, value, caseNum=1;
   // 被接到的節點當key
   map<int, vector<int> > edges;
   while(cin >> value >> key){
        rootSet.clear();
        if(value == 0 && key == 0){
            if(isTree(edges))
                cout << "Case " << caseNum++ << " is a tree. " << "Root is " << *(rootSet.begin()) << ".\n";
            else
                cout << "Case " << caseNum++ << " is not a tree.\n";
            edges.clear();
            continue;
        }
        else if(value == -1 && key == -1)   break;
        edges[key].push_back(value);
   }
}

bool isTree(map<int, vector<int> > &edges){
    for(map<int, vector<int> >::iterator it = edges.begin(); it!=edges.end(); it++){
        set<int> visitedNode;
        int current = it->first;
        if(edges[current].size() > 1)   return false; // this means key is larger than one
        while(true){
            if(visitedNode.count(current) >= 1){    // check whether there is loop
                return false;
            }
            else if(edges.count(current) == 0){
                rootSet.insert(current);
                break;
            }
            visitedNode.insert(current);
            current = edges[current][0]; // 把value當成key，再跑一次while(一直往parent找，直到找不到，那就是root)
        }
    }
    if(rootSet.size() > 1)  return false;
    return true;
}
