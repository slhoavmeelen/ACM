#include <cstdio>
#include <queue>
using namespace std;

const int maxn = 100;
int m,n;
int matrix[maxn][maxn];
bool vis[maxn][maxn] = {false};
int X[4] = {0,0,1,-1};
int Y[4] = {1,-1,0,0};

struct node{
    int x,y;
}Node;

bool isOne(int x, int y){
    if(x<0 || x>=n || y<0 || y>=m) return false;
    if(matrix[x][y]==0 || vis[x][y]==true) return false;
    return true;
}

void BFS(int x, int y){
    queue<node> q;
    Node.x = x, Node.y = y;
    q.push(Node);
    while(!q.empty()){
        node front = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int newX = front.x+X[i];
            int newY = front.y+Y[i];
            if(isOne(newX, newY)){
                Node.x = newX, Node.y = newY;
                q.push(Node);
                vis[newX][newY] = true;
            }
        }
    }
}

void DFS(int x, int y){
    if(!isOne(x, y)) return ;
    vis[x][y] = true;
    for(int i=0; i<4; i++){
        DFS(x+X[i], y+Y[i]);
    }
}

int main(){
    scanf("%d%d",&m,&n);
    for(int y=0; y<m; y++){
        for(int x=0; x<n; x++){
            scanf("%d",&matrix[x][y]);
        }
    }
    int cnt = 0;
    for(int y=0; y<m; y++){
        for(int x=0; x<n; x++){
            if(isOne(x, y) && !vis[x][y]){
                //BFS(x, y);
                DFS(x, y);
                cnt++;
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}
