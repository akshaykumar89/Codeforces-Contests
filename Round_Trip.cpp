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
bool loop = false;
bool vis[100001];
int vrt=-1;
bool stop=false;
vi ans;
void dfs(int cr , int prv , vector<vi> & edges)
{
     if(vis[cr])
     {
        loop=true;
        // cout<<cr<<" ";
        ans.pb(cr);
        vrt=cr;
        return;
     }
     vis[cr]=true;
     for(int k : edges[cr])
     {
        if(loop==false and k!=prv)
        {
            dfs(k,cr,edges);
        }
     }
     if(loop and stop==false) {
        // cout<<cr<<" ";
        ans.pb(cr);
     }
     if(cr==vrt) stop=true;
}
void solver()
{
int n,m; 
 cin>>n>>m;
 vector<vi> edges(n+1);
 ilop(i,0,m)
 {
    int a,b;
    cin>>a>>b;
    edges[a].pb(b);
    edges[b].pb(a);
 }
 memset(vis,false, sizeof(vis));
 ilop(i,0,n+1)

 {   if(loop) continue;
    if(!vis[i])
    dfs(i,-1,edges);
}
 if(ans.size()==0) cout<<"IMPOSSIBLE";
 else 
 {  cout<<ans.size()<<endl;
    for(int k:ans) cout<<k<<" ";
 }



    
}

 int tc=1;
signed main()
{
    akshay(); 
    // test(t){
        // cout<<"Case #"<<tc++<<": ";
solver();
// }
    return 0;
}