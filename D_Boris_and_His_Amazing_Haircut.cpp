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
    // cout<<"a";
    int n, m;
    cin >> n;
    take(a, n);
    take(b, n);
    cin >> m;
    take(rz, m);
    mii mp;

    ilop(i, 0, m) mp[rz[i]]++;
    for (int i = 0; i < n; i++)
    {
        if (b[i] > a[i])
        {
            cout << "NO\n";
            return;
        }
    }
    stack<int> st;
    ilop(i, 0, n)
    {  
        //  cout<<i<<" ";
        if (st.size() == 0 and a[i] == b[i])
            continue;
        if (st.size() == 0)
        {
            if (mp[b[i]] > 0)
            {
                st.push(b[i]);
                mp[b[i]]--;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
        else
        {
            if (b[i] < st.top())
            {   
                if(a[i]==b[i]) continue;
                if (mp[b[i]] > 0)
                {   

                    st.push(b[i]);
                    mp[b[i]]--;
                }
                else
                {
                    cout << "NO\n";
                    return;
                }
            }
            else if (b[i] >= st.top())
            {
                while (st.size() != 0 and st.top() < b[i] )
                        st.pop();
                if (st.size() == 0)
                {   if(a[i]==b[i]) continue;
                    if (mp[b[i]] > 0)
                    {
                        st.push(b[i]);
                        mp[b[i]]--;
                    }
                    else
                    {
                        cout << "NO\n";
                        return;
                    }
                }
                else
                {   
                    if(a[i]==b[i]) continue;
                    if (st.top() == b[i])
                    {
                    }
                    else
                    {
                        if (mp[b[i]] > 0)
                        {
                            st.push(b[i]);
                            mp[b[i]]--;
                        }
                        else
                        {
                            cout << "NO\n";
                            return;
                        }
                    }
                }
            }
        }
    }
    cout << "YES\n";
}

int tc = 1;
signed main()
{
    akshay();
    test(t)
    {
        // cout<<"Case #"<<tc++<<": ";
        solver();
    }
    return 0;
}