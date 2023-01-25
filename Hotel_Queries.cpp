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
vi tree;
void update(int node , int val)
{
    //int n=tree.size();
    tree[node]-=val;
    int pr=node/2; 
    while(pr>=1)
    {
        tree[pr]=max(tree[pr*2],tree[pr*2+1]);
        pr=pr/2;
    }
}
int qry(int node ,int val)
{    
    // cout<<tree[node]<<endl;
     int n=tree.size()/2;
     if(node>=n) return node;
     if(tree[2*node]>=val) return qry(2*node,val);
     return qry(2*node+1,val);
}
void solver()
{
int n,m; 
 cin>>n>>m;
 take(hotel,n);
 while(__builtin_popcount(n)!=1)
 {
    hotel.push_back(0);
    n++;
 }
 tree.resize(2*n);
 ilop(i,0,n) tree[i+n]=hotel[i];
 for(int i=n-1;i>=1;i--)
 {
    tree[i]=max(tree[2*i],tree[2*i+1]);
 } 
//  ilop(i,1,2*n)cout<<tree[i]<<" ";
//  cout<<endl;
 //cout<<tree[1];
 ilop(i,0,m)
 {
    int val; cin>>val;
    if(val>tree[1]) 
    {
        cout<<0<<" ";
    }
    else
    {int idx=qry(1,val);
    cout<<idx-n+1<<" ";
    update(idx,val);}
 } 
}

 int tc=1;
signed main()
{
    akshay(); 
   // test(t){
        // cout<<"Case #"<<tc++<<": ";
solver();

    return 0;
}