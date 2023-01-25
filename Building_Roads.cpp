#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define inf 1e18
#define ninf 1e18 * (-1)

#define ff first
#define ss second
#define pb push_back
#define ppb pop_back()
#define vi vector<int>
#define mp make_pair
#define pii pair<int, int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define take(name, size) \
   vi name(size);        \
   ilop(i, 0, size) cin >> name[i];
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

#define ps(x, y) fixed << setprecison(y) << x
#define mk(arr, n, type) type *arr = new type[n]
#define test(t) \
   int t;       \
   cin >> t;    \
   while (t--)
#define eilop(i, x, y) for (auto i = x; i <= y; i++)
#define ilop(i, x, y) for (int i = x; i < y; i++)
#define edlop(i, x, y) for (int i = y; i >= x; i--)
#define dlop(i, y, x) for (int i = y; i > x; i--)
using namespace std;

void akshay()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
}
void dfs(int v, vi &vis, vector<vi> &edges)
{
   if (vis[v] == 1)  return;
     
   vis[v] = 1;
   for (int k : edges[v])
      dfs(k, vis, edges);
}
void solver()
{
   int n, m;
   cin >> n >> m;
   vector<vi> edges(n + 1);
   ilop(i, 0, m)
   {
      int u, v;
      cin >> u >> v;
      edges[u].pb(v);
      edges[v].pb(u);
   }
   vi vis(n + 1, -1);
   vi ans;

   ilop(i, 1, n + 1)
   {
      if (vis[i] == -1)
      {
         ans.push_back(i);
         dfs(i, vis, edges);
      }
   }
   cout << ans.size() - 1 << endl;
   for (int i = 1; i < ans.size(); i++)
   {
      cout << ans[0] << " " << ans[i] << endl;
   }
}

int tc = 1;
signed main()
{
   akshay();
   // test(t){
   // cout<<"Case #"<<tc++<<": ";
   solver();
   // }
   return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// #define MAXN 202020

// int n, m;
// vector<vector<int>>adj(MAXN);
// vector<bool>visited(MAXN, false);
// vector<int>bridges;

// void DFS (int node) {
//   visited[node] = true;
//   for (auto child : adj[node]) {
//     if (visited[child] == false) {
//       DFS(child);
//     }
//   }
// }

// int main() {
//     cin >> n >> m;
//     for (int i = 0 ; i < m; i++) {
//       int node1, node2;
//       cin >> node1 >> node2;
//       adj[node1].push_back(node2);
//       adj[node2].push_back(node1);
//     }
//     for (int i = 1; i <= n; i++) {
//       if (visited[i] == false) {
//         bridges.push_back(i);
//         DFS(i);
//       }
//     }
//     cout << bridges.size() - 1 << endl;
//     for (int i = 0; i < bridges.size() - 1; i++) {
//       cout << bridges[i] << " " << bridges[i + 1] << endl;
//     }
//     return 0;
// }