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
    //cout << 1 << endl;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> egde(500005);
   // cout << 1;
    ilop(k, 0, m)
    {
         vi grp;
        int sz;
        cin >> sz;

        take(a, sz);
        if (sz == 0 or sz == 1)
            continue;
        ilop(j, 0, sz - 1)
        {
            egde[a[j]].pb(a[j + 1]);
            egde[a[j + 1]].pb(a[j]);
        }
    }
    bool vis[500005];
    memset(vis, 0, sizeof(vis));
    int ans[n + 4]={1};
    ilop(i, 1, n + 1)
    {
        if (!vis[i])
        {
            vi comp;
            queue<int> q;
            q.push(i);
            while (q.size() != 0)
            {    
                int cur = q.front();
                q.pop();
                if(vis[cur])continue;
                vis[cur] = true;
                comp.push_back(cur);
                

                // if(egde[cur].size()==0) continue;
                for (int k: egde[cur])
                {
                    if (!vis[k])
                        q.push(k);
                }
            }
            for (int j : comp)
                ans[j] = comp.size();
        }
    }
    ilop(i, 1, n + 1) cout << ans[i] << " ";
    cout << endl;
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