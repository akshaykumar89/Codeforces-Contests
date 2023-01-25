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
void fp(int r , int c , map<pii,pii> &mp)
{
    string s="";
    while(mp.count({r,c})>0)
    {
       int r2=mp[{r,c}].first;
       int c2=mp[{r,c}].second;
       if(r2==r-1) s+="D";
       else if(r2==r+1) s+="U";
       else if(c2==c+1) s+="L";
       else s+="R";
       r=r2;
       c=c2;  
    }
    cout<<s.size()<<endl;
    reverse(s.begin(),s.end());
    cout<<s;

}
void solver()
{
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    ilop(i, 0, n)
    {
        cin >> grid[i];
    }
    queue<pii> monster, agent;
    ilop(i, 0, n)
    {
        ilop(j, 0, m)
        {
            if (grid[i][j] == 'A')
            {
                if (i == 0 or i == n - 1 or j == 0 or j == m - 1)
                {
                    cout << "YES\n0";
                    return;
                }
                agent.push({i, j});
            }
            else if (grid[i][j] == 'M')
                monster.push({i, j});
        }
    }
    map<pii, pii> mp;
    while (agent.size() != 0)
    {
        int sz = monster.size();
        ilop(i, 0, sz)
        {
            pii cur = monster.front();
            int r = cur.first;
            int c = cur.second;
            monster.pop();
            if (r < n - 1 and (grid[r + 1][c] == '.' or grid[r + 1][c] == 'A'))
            {
                grid[r + 1][c] = 'M';
                monster.push({r + 1, c});
            }
            if (r > 0 and (grid[r - 1][c] == '.' or grid[r - 1][c] == 'A'))
            {
                grid[r - 1][c] = 'M';
                monster.push({r - 1, c});
            }
            if (c < m - 1 and (grid[r][c + 1] == '.' or grid[r][c + 1] == 'A'))
            {
                grid[r][c + 1] = 'M';
                monster.push({r, c + 1});
            }
            if (c > 0 and (grid[r][c - 1] == '.' or grid[r][c - 1] == 'A'))
            {
                grid[r][c - 1] = 'M';
                monster.push({r, c - 1});
            }
        }
        sz = agent.size();
        ilop(i, 0, sz)
        {
            pii cur = agent.front();
            int r = cur.first;
            int c = cur.second;
            agent.pop();
            if (r < n - 1 and (grid[r + 1][c] == '.'))
            {
                mp[{r + 1, c}] = {r, c};
                grid[r + 1][c] = 'A';
                if (r + 1 == n - 1)
                {   
                    cout << "YES\n";
                    fp(r+1,c,mp);
                    return;
                }
                agent.push({r + 1, c});
            }
            if (r > 0 and (grid[r - 1][c] == '.'))
            {
                mp[{r - 1, c}] = {r, c};
                grid[r - 1][c] = 'A';
                if (r - 1 == 0)
                {
                    cout << "YES\n";
                    fp(r-1,c,mp);

                    return;
                }
                agent.push({r - 1, c});
            }
            if (c < m - 1 and (grid[r][c + 1] == '.'))
            {
                mp[{r, c + 1}] = {r, c};
                grid[r][c + 1] = 'A';
                if (c + 1 == m - 1)
                {
                    cout << "YES\n";
                    fp(r,c+1,mp);

                    return;
                }
                agent.push({r, c + 1});
            }
            if (c > 0 and (grid[r][c - 1] == '.'))
            {
                mp[{r, c - 1}] = {r, c};
                grid[r][c - 1] = 'A';
                if (c - 1 == 0)
                {
                    cout << "YES\n";
                    fp(r,c-1,mp);

                    return;
                }
                agent.push({r, c - 1});
            }
        }
    }
    cout << "NO";
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