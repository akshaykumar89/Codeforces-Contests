#include<bits/stdc++.h>
#define long long intlong long 
#define mod 1000000007
#define inf 1e18
#define ninf 1e18*(-1)

#define ff first
#define ss second
#define pb push_back
#define ppb pop_back()
#define vi vector<int>
#define mp make_pair
#define pii pair<int,int>
#define mii map<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

#define ps(x,y) fixed<<setprecison(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define test(t) long long intt;cin>>t;while(t--)
#define eilop(i,x,y) for(auto i=x;i<=y;i++)
#define ilop(i,x,y) for(long long inti=x;i<y;i++)
#define edlop(i,x,y) for(long long inti=y;i>=x;i--)
#define dlop(i,y,x) for(long long inti=y;i>x;i--)
using namespace std;

void akshay()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solver()
{
long long intn; 
 cin>>n;
    long long intm ;cin>>m;
    vector<string> grid(n);
    ilop(i,0,n)
    {
        cin>>grid[i];
    }
    long long intUp=-1, down , left=-1, right;
    vector<vi> cor;
    ilop(i,0,n)
    {
        ilop(j,0,m)
        {
            if(grid[i][j]=='R')
            {
                
            }
        }
    }







}

 long long inttc=1;
signed main()
{
    akshay(); 
    test(t){
        // cout<<"Case #"<<tc++<<": ";
solver();
}
    return 0;
}