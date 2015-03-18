#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;
const int maxn = 100;

struct node{
    int x,y;
    int step;
}Node,S,T;

int n,m;
char maze[maxn][maxn];
bool inq[maxn][maxn] = {false};
int X[4] = {0, 0, -1, 1};
int Y[4] = {-1, 1, 0, 0};

bool isOk(int x, int y){
    if(x<0 || x>=n || y<0 || y>=m) return false;
    if(inq[x][y] || maze[x][y]=='*') return false;
    return true;
}

int BFS(){
    queue<node> q;
    q.push(S);
    while(!q.empty()){
        node front = q.front();
        q.pop();
        if(front.x==T.x && front.y==T.y){
            return front.step;
        }
        for(int i=0; i<4; i++){
            int newX = front.x+X[i];
            int newY = front.y+Y[i];
            if(isOk(newX, newY)){
                Node.x = newX, Node.y = newY;
                Node.step = front.step+1;
                q.push(Node);
                inq[newX][newY] = true;
            }
        }
    }
    return -1;
}

int main(){
    scanf("%d%d",&m,&n);
    for(int y=0; y<m; y++){
        getchar();
        for(int x=0; x<n; x++){
            maze[x][y] = getchar();
        }
        maze[y][m+1] = '\0';
    }
    scanf("%d%d%d%d",&S.y,&S.x,&T.y,&T.x);
    S.step = 0;
    printf("%d\n", BFS());
    return 0;
}
