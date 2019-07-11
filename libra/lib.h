#pragma once

#define int long long
const int MOD = 1e9+7;

int modpow(int a,int b) {
	int res = 1;
	int tmp = a;
	while(b) {
		if(b&1) res = res*tmp%MOD;
		tmp = tmp*tmp%MOD;
		b >>= 1;
	}
	return res;
}

int gcd(int a, int b) {
	if(b==0) return a;
	return gcd(b,a%b);
}

//Maxflow コンストラクタに頂点数渡す

struct Maxflow{
	struct Edge{int to,cap,rev;};

	using Edges = vector<Edge>;
	using Graph = vector<Edges>;

	Graph g;
	vector<int> used;
	const int INF = 1e8;
	const int MAX_V;

	Maxflow(int V):g(V),used(V,0),MAX_V(V){}

	void add_edge(int from,int to,int cap){
		g[from].push_back(Edge{to,cap,(int)g[to].size()});
		g[to].push_back(Edge{from,0,(int)g[from].size()-1});
	}

	int dfs(int v,int t,int f){
		if(v==t)return f;
		used[v]=true;
		for(int i=0;i<g[v].size();i++){
			Edge &e = g[v][i];
			if(!used[e.to]&&e.cap>0){
				int d =dfs(e.to,t,min(f,e.cap));
				if(d>0){
					e.cap -=d;
					g[e.to][e.rev].cap+=d;
					return d;
				}	
			}
		}

		return 0;
	}

	int max_flow(int s,int t){
		int flow = 0;
		for(;;){
			rep(i,0,MAX_V)used[i]=false;
			int f=dfs(s,t,INF);
			if(f==0)return flow;
			flow+=f;
		}
	}
};