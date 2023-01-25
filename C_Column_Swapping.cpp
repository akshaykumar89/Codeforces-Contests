#include<bits/stdc++.h>
#define int long long 
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
#define test(t) int t;cin>>t;while(t--)
#define eilop(i,x,y) for(auto i=x;i<=y;i++)
#define ilop(i,x,y) for(int i=x;i<y;i++)
#define edlop(i,x,y) for(int i=y;i>=x;i--)
#define dlop(i,y,x) for(int i=y;i>x;i--)
using namespace std;

void akshay()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solver()
{
int n,m; 
 cin>>n>>m;
 vector<vi> grid(n,vi(m,0)),g1;
 ilop(i,0,n)
 {
    ilop(j,0,m) cin>>grid[i][j];
 }
 g1=grid;
 ilop(i,0,n)
 {
    sort(grid[i].begin(),grid[i].end());
 }
 vi ans;
 ilop(j,0,m)
 {
    vi v1,v2;
    ilop(i,0,n)
    {
        v1.push_back(g1[i][j]);
        v2.push_back(grid[i][j]);
    }
    if(v1!=v2) ans.pb(j+1);
 }
 if(ans.size()>2)
 {
    cout<<-1<<endl;
    return;
 }
 if(ans.size()==0)
 {
    cout<<1<<" "<<1<<endl;
    return;
 }
 ilop(i,0,n)
 {
    int p=ans[0]-1;
    int q=ans[1]-1;
    swap(g1[i][p],g1[i][q]);
 }
 if(grid==g1)
 {
    cout<<ans[0]<<" "<<ans[1]<<endl;
 }
 else cout<<-1<<endl;
    
 
 if(ans.size()>2) cout<<-1<<endl;

    
}

 int tc=1;
signed main()
{
    akshay(); 
    test(t){
        // cout<<"Case #"<<tc++<<": ";
solver();
}
    return 0;
}