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
 map<pii,int> mp;
 vi edge[150005];
 ilop(i,0,m)
 {
    int u,v; cin>>u>>v;
    edge[u].pb(v);
    edge[v].pb(u);
    mp[{u,v}]++;
    mp[{v,u}]++;
 }
 bool vis[150005];
 memset(vis,false,sizeof(vis));

 ilop(i,1,n+1)
 {  
    if(!vis[i])
    {   vi comp;
        queue<int> q;
        q.push(i);
        //int turn=1;
       // vis[i]=true;
        while(!q.empty())
        {  
            int cur=q.front();
            q.pop();
            
            
            
            if(vis[cur]) continue;
            comp.pb(cur);
            vis[cur]=true;
           for(int k:edge[cur])
           {  
            // cout<<k<<" ";
              if(!vis[k]) q.push(k);
           }
        //    cout<<endl;
           
        }
       int sz=comp.size();
    //    ilop(z,0,sz) cout<<comp[z]<<" ";
    //    cout<<endl;
        for(int p=0;p<sz-1;p++)
        {
            for(int r=p+1;r<sz;r++)
            {
                if(mp[{comp[p],comp[r]}]==0) 
                {
                   cout<<"NO";
                   return;
                }
            }
        }   
    } 
      
            
 }
 cout<<"YES";
    
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