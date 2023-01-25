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
int qry(int node , int range_s , int range_e , int q_s , int q_e)
{
    if(q_s<=range_s and range_e<=q_e) return tree[node];
    if(q_e<range_s or range_e<q_s) {
        return 0;
        }
    int left=node*2;
    int right=left+1;
    return qry(left , range_s , (range_s+range_e)/2 , q_s , q_e ) + qry(right , ((range_s+range_e)/2)+1, range_e , q_s , q_e );
    cout<<endl;
}
void solver()
{
int n,q; 
 cin>>n>>q;
    take(a,n);
    while(__builtin_popcount(n)!=1)    {a.push_back(0);n++;}

    tree.resize(2*n);
    ilop(i,0,n)
    {
        tree[n+i]=a[i];
    }
    for(int i=n-1;i>=1;i--)
    {
        tree[i]=tree[i*2]+tree[2*i+1];
    }
   // ilop(i,1,2*n) cout<<tree[i]<<" ";
    cout<<endl;
    ilop(i,0,q)
    {
        int s,e; cin>>s>>e;
        s--;
        e--;
        cout<<qry(1,0,n-1,s,e)<<endl;
    }

   

}

 int tc=1;
signed main()
{
    akshay(); 
   
        // cout<<"Case #"<<tc++<<": ";
solver();

    return 0;
}