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

void solver()
{
int n,m; 
 cin>>n>>m;
 vector<vi> edges(n+1);
 ilop(i,0,m)
 {
    int u,v;
    cin>>u>>v;
    edges[v].pb(u);
    edges[u].pb(v);
 }
 bool vis[n+1];
 int parent[n+1];
 memset(parent,0,sizeof(parent));
 memset(vis,false,sizeof(vis));
    int i=1;
    if(!vis[i])
    {
        queue<int> q;
        q.push(i);
        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
            if(vis[cur]) continue;
            if(cur==n)
            { 
              vi ans;
               int vrtx=n;
               ans.push_back(vrtx);
               while(vrtx!=1)
               { 
                  vrtx=parent[vrtx];
                  ans.push_back(vrtx);
               }
               cout<<ans.size()<<endl;
               int sz=ans.size();
               for(int p=sz-1;p>=0;p--)
               {
                cout<<ans[p]<<" ";
               }
               return;

            }
            vis[cur]=true;
            for(int k:edges[cur])
            {
                 if(!vis[k])
                 {  
                    if(parent[k]==0)
                    parent[k]=cur;
                    q.push(k);
                 }
            }
            // cout<<4<<" "<<parent[4]<<endl;
            // cout<<5<<" "<<parent[5]<<endl;
            // cout<<8<<" "<<parent[8]<<endl;
            // cout<<10<<" "<<parent[10]<<endl;
        }
    }
    cout<<"IMPOSSIBLE";
 

    
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