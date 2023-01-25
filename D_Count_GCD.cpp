#include<bits/stdc++.h>
#define int long long 
#define mod 998244353
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
int ndiv(int n , int limit)
{
    return  limit/n;
}

void solver()
{
int n,m; 
 cin>>n>>m;
 take(a,n);
 int ans=1;
 int cur=1;
 ilop(i,1,n)
 {  int cnt;
    if(a[i]==a[i-1])
    {
         cnt=cur;
    }
   else {cnt=ndiv(a[i],m) - ndiv(a[i-1],m);
    cur=cnt;}
    if(cnt<=0) {
        cout<<0<<endl;
        return;
    }
    ans=ans*cnt;
    ans=ans%mod;
 }
 cout<<ans<<endl;

    
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