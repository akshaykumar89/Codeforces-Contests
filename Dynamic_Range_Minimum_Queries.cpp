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
 int qry(int k)
 {
    int n=tree.size()/2;
    int ans=0;
     ans+=tree[n+k-1];
     int pr=n+k-1;
     pr/=2;
     while(pr>=1)
     {
        ans+=tree[pr];
        pr=pr/2;
     }
     return ans;


 }
 void update(int node, int rs , int re , int qs , int qe ,int val)
 {
     if(qs<=rs and qe>=re) {tree[node]+=val; 
// cout<<"tre   "<<node<<endl;

     return; }
     if(re<qs or qe<rs) return;
     update(2*node , rs , (rs+re)/2 , qs , qe , val) ;
     update(2*node +1  , ((rs+re)/2) +1 ,re, qs , qe , val) ;
 }
void solver()
{
int n,q; 
 cin>>n>>q;
 take(a,n);
 while(__builtin_popcount(n)!=1)
 {
    n++;
    a.push_back(0);
 }
 tree.resize(2*n);
 ilop(i,0,n) tree[n+i]=a[i];
 for(int i=n-1;i>=1;i--) tree[i]=0;
 ilop(i,0,q)
 {
    int ty; cin>>ty;
    if(ty==1)
    {
        int s , e , val; cin>>s>>e>>val;
        
        update(1,0,n-1,s-1,e-1,val);
    }
    else{
        int k ; cin>>k;
        cout<<qry(k)<<endl;

    }
 }
 //cout<<"tre  5 "<<tree[5]<<endl;


 
}

 int tc=1;
signed main()
{
    akshay(); 
    //test(t){
        // cout<<"Case #"<<tc++<<": ";
solver();

    return 0;
}