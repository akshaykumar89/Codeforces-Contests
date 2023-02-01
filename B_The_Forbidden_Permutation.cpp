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
/////////////////////////////////////////
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
//////////////////////////////////////////
void akshay()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solver()
{
int n,m,d; 
 cin>>n>>m>>d;
 d++;
 take(a,n);
 mii mp;
 ilop(i,0,n) mp[a[i]]=i+1;
 vi b;
 ilop(i,0,m)
 {
    int nm;
    cin>>nm;
    b.pb(mp[nm]);
 }
 int ans=inf;
 ilop(i,1,m)
 {
      if(b[i]>=b[i-1]+d or b[i]<b[i-1])
      {
        cout<<0<<endl;
        return;
      }
      else{
        //   if(b[i-1]+d<=n)
        //   {
        //     ans=min(ans,b[i-1]+d-b[i]);
        //   }
        //   ans=min(ans,b[i]-b[i-1]);
        if(d<=n-1)
        {int d1=abs(b[i]-b[i-1]);
        ans=min({ans,d-d1,d1});}
        else{
            int d1=abs(b[i]-b[i-1]);
            ans=min(ans,d1);
        }

        
      }
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
