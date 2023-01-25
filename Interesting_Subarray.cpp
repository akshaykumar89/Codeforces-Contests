
#include <bits/stdc++.h>
using namespace std;

int N;
struct Node {
	int node;
	int edgeLabel;
};
vector<Node> adj[100005];
vector<int> freq;
int mx=INT_MIN;
vector<vector<int>> ans;
vector<vector<int>> mxtoll(int num,vector<vector<int>> edge)
{     int n=edge.size();
     for(int i=0;i<n-1;i++)
     {
        addEdge(edge[i][0], edge[i][1], i+1);
     }
     freq = vector<int>(num);
     dfs();
     return ans;
}
int dfs(int u = 1, int p = 1)
{
	
	int sz = 1;
    
	
	for (auto a : adj[u]) {

	
		if (a.node != p) {

	
			int val = dfs(a.node, u);

			
			if(mx< val * (N - val))
            {
                ans.push_back({u,p});
                mx=val * (N - val);
            }
            
            
			sz += val;
		}
	}

	return sz;
}


void addEdge(int u, int v, int label)
{
	adj[u].push_back({ v, label });
	adj[v].push_back({ u, label });
}



