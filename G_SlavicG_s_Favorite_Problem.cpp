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
#define take(name,size) vi name(size) ; ilop(i,0,size) cin>>name[i];
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
int target;
int b;
int ans=false;
void dfs(int v , int xr, vector<vi> &edges , vector<bool> &vis , map<pii,int> & mp)
{
    if(vis[v]) return;
    vis[v]=true;
    // cout<<"v ="<<v<<" "<<xr<<endl;
    if(xr==target)
    {   
        ans=true;
        return;
    }
    for(int y:edges[v])
    {   
        if(y==b and (xr^mp[{y,v}])==0)
        {
           ans=true;
           dfs(y,0,edges,vis,mp);
        }
        if(!vis[y] and y!=b)
        {
            dfs(y,(xr^mp[{y,v}]),edges,vis,mp);
        }
    }

}
void solver()
{
int n,a; 
 cin>>n>>a>>b;
 vector<vi> edges(n+1);
 map<pii,int> mp;
 
 ilop(i,0,n-1)
 {
    int u,v,cst;
    cin>>u>>v>>cst;
    edges[v].pb(u);
    edges[u].pb(v);
    mp[{u,v}]=cst;
    mp[{v,u}]=cst;
    if(u==b or v==b) target=cst;
 }
//  cout<<"trgt "<<target<<endl;
 vector<bool> vis(n+1,false);
 ans=false;
 dfs(a,0,edges,vis,mp);
 if(ans) cout<<"YES\n";
 else cout<<"NO\n";
    
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