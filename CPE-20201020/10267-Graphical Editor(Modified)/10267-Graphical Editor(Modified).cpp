// UVa 10267
#include <iostream>
using namespace std;
class Graph{
    private:
        char **table;
        int M, N;
    public:
        Graph();
        ~Graph();
        void I(int,int);
        void C();
        void L(int,int,char);
        void V(int,int,int,char);
        void H(int,int,int,char);
        void K(int,int,int,int,char);
        void F(int,int,char);
        void S(string);
        void dfs(int, int, char, char);
};
Graph::Graph(){}
Graph::~Graph(){
    for(int i=0; i<N; i++)
        delete [] table[i];
    delete [] table;
}

void Graph::I(int col, int row){
    M = col;
    N = row;

    char **arr = new char *[N+1];
    for(int i=1; i<=N; i++){
        arr[i] = new char[M+1];
    }

    table = arr;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++)
            table[i][j] = 'O';
    }
}

void Graph::C(){
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++)
            table[i][j] = 'O';
    }
}

void Graph::L(int col, int row, char color){
    if(row == 0 || col == 0)    return;
    table[row][col] = color;
}

void Graph::V(int col, int row1, int row2, char color){
    if(row1 > row2){
        for(int i=row2; i<=row1; i++)
            table[i][col] = color;
    }
    else{
        for(int i=row1; i<=row2; i++)
            table[i][col] = color;
    }
}

void Graph::H(int col1, int col2, int row, char color){
    if(col1 > col2){
        for(int i=col2; i<=col1; i++)
            table[row][i] = color;
    }
    else{
         for(int i=col1; i<=col2; i++)
            table[row][i] = color;
    }
}

void Graph::K(int col1, int row1, int col2, int row2, char color){
    if(row1 > row2){
        if(col1 > col2){
            for(int i=row2; i<=row1; i++){
                for(int j=col2; j<=col1; j++)
                    table[i][j] = color;
            }
        }
        else{
            for(int i=row2; i<=row1; i++){
                for(int j=col1; j<=col2; j++)
                    table[i][j] = color;
            }
        }
    }
    else{
         if(col1 > col2){
            for(int i=row1; i<=row2; i++){
                for(int j=col2; j<=col1; j++)
                    table[i][j] = color;
            }
        }
        else{
            for(int i=row1; i<=row2; i++){
                for(int j=col1; j<=col2; j++)
                    table[i][j] = color;
            }
        }
    }
}

void Graph::dfs(int col, int row, char current, char color){
    if(row<1 || row>N || col<1 || col>M)  return;
    if(table[row][col] != current || current == color)  return;

    table[row][col] = color;
    dfs(col-1, row, current, color);
    dfs(col+1, row, current, color);
    dfs(col, row-1, current, color);
    dfs(col, row+1, current, color);
}

void Graph::F(int col, int row, char color){
    dfs(col, row,table[row][col], color);
}

void Graph::S(string name){
    cout << name << endl;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++)
            cout << table[i][j];
        cout << endl;
    }
}

int main()
{
    char ch, color;
    int row, row2, col, col2;
    string name, useless;
    bool  isFinish = false;
    Graph graph;

    while(cin >> ch){
        isFinish = false;
        switch(ch)
        {
            case 'I':
                cin >> col >> row;
                graph.I(col, row);
                break;
            case 'C':
                graph.C();
                break;
            case 'L':
                cin >> col >> row >> color;
                graph.L(col, row, color);
                break;
            case 'V':
                cin >> col >> row >> row2 >> color;
                graph.V(col, row, row2, color);
                break;
            case 'H':
                cin >> col >> col2 >> row >> color;
                graph.H(col, col2, row, color);
                break;
            case 'K':
                cin >> col >> row >> col2 >> row2 >> color;
                graph.K(col, row, col2, row2, color);
                break;
            case 'F':
                cin >> col >> row >> color;
                graph.F(col , row, color);
                break;
            case 'S':
                cin >> name;
                graph.S(name);
                break;
            case 'X':
                isFinish = true;
                break;
            default:
                getline(cin, useless);
                break;
        }
        if(isFinish)
            break;
    }
}
