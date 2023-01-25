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
    vi name(size);       \
    ilop(i, 0, size) cin >> name[i];
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

#define ps(x, y) fixed << setprecison(y) << x
#define mk(arr, n, type) type *arr = new type[n]
#define test(t) \
    int t;      \
    cin >> t;   \
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

void solver()
{
    int n, m;
    cin >> n >> m;
    vi edge[100005];
    ilop(i, 0, m)
    {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    int vis[100005];
    memset(vis, -1, sizeof(vis));
    ilop(i, 1, n + 1)
    {
        if (vis[i] == -1)
        {
            bool col = false;
            queue<int> q;
            q.push(i);
            int k = 0;
            while (!q.empty())
            {
                int cur = q.front();

                if (k == 0)
                {
                    // cout<<col<<" "<<cur<<endl;
                    if (col)
                        col = false;
                    else
                        col = true;
                    k = q.size();
                }
                q.pop();
                // cout<<k<<endl;
                if (k > 0)
                {
                    vis[cur] = col ? 1 : 2;
                    //  cout<<vis[cur]<<" "<<cur<<endl;;
                    k--;
                }
                for (int y : edge[cur])
                {
                    if (vis[y] == -1)
                        q.push(y);
                    else
                    {
                        if (vis[y] == 1 and col)
                        {
                            cout << "IMPOSSIBLE" << endl;
                            return;
                        }
                        if (vis[y] == 2 and col == false)
                        {
                            cout <<"IMPOSSIBLE"<< endl;
                            return;
                        }
                    }
                }
            }
        }
    }
    vi bl, gr;
    ilop(i, 1, n + 1)
    {
        
            cout<<vis[i]<<" ";
        
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