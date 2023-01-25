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
 vector<vector<pii>> edges(n+1);
 ilop(i,0,m)
 {
     int a,b,c ; cin>>a>>b>>c;
     edges[a].pb({c,b}); 
 }
 int distance[n+1];

 priority_queue<pii,vector<pii>,greater<pii>>q;
 q.push({0,1});
 bool vis[n+1];
 memset(vis,false,sizeof(vis));
memset(distance,inf,sizeof(distance));
//  ilop(i,1,n+1) distance[i]=inf;
 distance[1]=0;
//  cout<<distance[2]<<endl;
 while(q.size()!=0)
 {
    pii cr = q.top();
    q.pop();
    if(vis[cr.second]) continue;
    vis[cr.second]=true;
    for(pii  k : edges[cr.second])
    {   
        
        int cst=k.first;
        int vxt=k.second;
        
        if(!vis[vxt])
        {    
            // cout<<vxt<<" prv dst "<<distance[vxt]<<endl;
            distance[vxt]=min(distance[vxt],distance[cr.second]+cst);
            q.push({distance[vxt],vxt});
            // cout<<"cst = "<<cst<<" cr "<<cr.second<<" dis "<<distance[cr.second]<<" "<<distance[vxt]<<" "<<distance[cr.second]+cst<<endl;
            // cout<<vxt<<" "<<distance[vxt]<<endl;
        }
    }
 }
 ilop(i,1,n+1) cout<<distance[i]<<" ";


    
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