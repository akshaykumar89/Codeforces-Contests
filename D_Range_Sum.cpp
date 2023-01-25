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
    int n;
    cin >> n;
    if(n==2)
    {
        cout<<"1 3\n";
        return;
    }
    int dif = 2 * n;
    vi a(n);
    a[0] = 1;
    a[n - 1] = (2 * n) + 1;
    int cr = 3;
    ilop(i, 1, n - 1)
    {
        a[i] = cr;
        cr += 2;
    }
   // ilop(i, 0, n) cout << a[i] << " ";
   // cout << endl;
    int sum = 0;
    ilop(i, 0, n) sum += a[i];
    int toadd = n - (sum % n);
    // cout<<"toadd "<<toadd<<endl;
    //ilop(i, 1, toadd + 1) a[i]++;
    int j = 1;
    while (toadd > 0)
    {   

        if (j == n - 2)
        {   
   // cout<<"toadd "<<toadd<<endl;

            a[j] += toadd;
            toadd = 0;
            break;
        }
        a[j]++;
        j++;
        toadd--;
    }
    //ilop(i, 0, n) cout << a[i] << " ";
   // cout << endl;
    sum = 0;
    ilop(i, 0, n) sum += a[i];
   // cout<<sum<<endl;
    int y = ((dif*dif)-sum)/n ;
   // cout<<"y "<<y<<endl;
    ilop(i, 0, n) a[i] += y;

    ilop(i, 0, n) cout << a[i] << " ";
    cout << endl;
   
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