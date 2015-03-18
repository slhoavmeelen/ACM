#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAXV = 510;
const int INF = 1000000000;

int n,m,st,ed,G[MAXV][MAXV];
int d[MAXV],w[MAXV],num[MAXV];
bool vis[MAXV] = {false};

void Dijkstra(int s){
    fill(d, d+MAXV, INF);
    d[s] = 0;
    for(int i=0; i<n; i++){
        int u=-1, MIN = INF;
        for(int j=0; j<n; j++){
            if(vis[j]==false && d[j]<MIN){
                u = j;
                MIN = d[j];
            }
        }
        if(u == -1) return ;
        vis[u] = true;
        for(int v=0; v<n; v++){
            if(d[u]+G[u][v] < d[v]){
                d[v] = d[u]+G[u][v];
                c[v] = c[u]+cost[u][v];
            }else if(d[u]+G[u][v]==d[v] && c[u]+cost[u][v]<c[v]){
                c[v] = c[u]+cost[u][v];
            }
        }
    }
}
