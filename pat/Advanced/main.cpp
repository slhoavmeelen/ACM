#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std; 

const int MAXV = 510;
const int INF = 100000000; 

//n为顶点数，m为边数， st和ed分别为起点和终点
//G为邻接矩阵， weight为点权
//d[]记录最短距离，w[]记录最大点权之和， num[]记录最短路径条数 
int n, m, st, ed, G[MAXV][MAXV], weight[MAXV];
int d[MAXV], w[MAXV], num[MAXV];
bool vis[MAXV] = {false};

void Dijkstra(int s){
	fill(d, d+MAXV, INF);
	memset(num, 0, sizeof(num));
	memset(w, 0, sizeof(w));
	d[s] = 0;
	w[s] = weight[s]; 
	num[s] = 1;
	for(int i = 0; i < n; i++){
		int u = -1, MIN = INF;
		for(int j = 0; j < n; j++){
			if(vis[j] == false && d[j] < MIN){
				u = j;
				MIN = d[j];
			}
		}
		//找不到
		if(u == -1) return;
		vis[u] = true;
		for(int v = 0; v < n; v++){
			if(vis[v] == false && G[u][v] != INF){
				if(d[u] + G[u][v] < d[v]){
					d[v] = d[u] + G[u][v];
					w[v] = w[u] + weight[v];
					num[v] = num[u];
				}else if(d[u] + G[u][v] == d[v]){
					if(w[u] + weight[v] > w[v]){
						w[v] = w[u] + weight[v];
					}
					num[v] += num[u];
				}
			}
		} 
	}
}

int main(){
	scanf("%d%d%d%d",&n,&m,&st,&ed);
	for(int i = 0; i < n; i++){
		scanf("%d",&weight[i]);
	}	
	int u,v;
	fill(G[0], G[0] + MAXV * MAXV, INF);
	for(int i = 0; i < m; i++){
		scanf("%d%d",&u,&v);
		scanf("%d",&G[u][v]);
		G[v][u] = G[u][v];
	}
	Dijkstra(st);
	printf("%d %d\n", num[ed], w[ed]);
	
	return 0;
}
