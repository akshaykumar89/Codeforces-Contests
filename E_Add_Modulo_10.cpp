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
bool equal(vi &arr , int num)
{
    //int num = arr[0];
   // cout<<"ten "<<num<<endl;
    int n = arr.size();
    ilop(i, 0, n)
    {    
        if(arr[i]%10==5 && arr[i]<num) continue;
        if (arr[i] != num)
            return false;
    }
    return true;
}
void solver()
{
    int n;
    cin >> n;
    vi arr(n, 0);
    ilop(i, 0, n) cin >> arr[i];
    bool zr = false;
    bool fv = false;
    int ten;
    ilop(i, 0, n)
    {
        if (arr[i] % 10 == 0)
           { zr = true; ten=arr[i];}
       else if (arr[i] % 10 == 5)
            fv = true;
       else if (arr[i] % 10 == 1)
            arr[i] += 7;
       else if (arr[i] % 10 == 2)
            arr[i] += 6;
       else if (arr[i] % 10 == 4)
            arr[i] += 4;
      else  if (arr[i] % 10 == 7)
            arr[i] += 11;
      else  if (arr[i] % 10 == 3)
            arr[i] += 15;
      else  if (arr[i] % 10 == 6)
            arr[i] += 12;
            else  if (arr[i] % 10 == 9)
            arr[i] += 9;
    }
    if (zr)
    {
        if (equal(arr,ten))
            cout << "Yes\n";
        else
            cout << "No\n";
        return;
    }
    if (fv)
    {
        bool ans = true;
        ilop(i, 0, n)
        {
            if (arr[i] % 5 != 0 or arr[i]==0)
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "Yes\n";
        else
            cout << "No\n";
        return;
    }
    
    
    int sx = -1, eg = -1;
    ilop(i, 0, n)
    {
        if (arr[i] % 10 == 8)
        {
            if (eg == -1)
            {
                int tmp = (arr[i] / 10) % 10;
                if (tmp & 1)
                    eg = 1;
                else
                    eg = 0;
            }
            else
            {
                int tmp = (arr[i] / 10) % 10;
                if (tmp & 1)
                {
                    if (eg != 1)
                    {
                        cout << "No\n";
                        return;
                    }
                }
                else
                {
                    if (eg != 0)
                    {
                        cout << "No\n";
                        return;
                    }
                }
            }
        }
        if(arr[i] % 10 == 6)
        {
            if (sx == -1)
            {
                int tmp = (arr[i] / 10) % 10;
                if (tmp & 1)
                    sx = 1;
                else
                    sx = 0;
            }
            else
            {
                int tmp = (arr[i] / 10) % 10;
                if (tmp & 1)
                {
                    if (sx != 1)
                    {
                        cout << "No\n";
                        return;
                    }
                }
                else
                {
                    if (sx != 0)
                    {
                        cout << "No\n";
                        return;
                    }
                }
            }
        }
    }
    cout<<"Yes\n";
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