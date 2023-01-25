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
int n; 
 cin>>n;
 int r; cin>>r;
    vi arr(n,0),prf(n+1,0),suf(n+1,0);
    ilop(i,0,n) cin>>arr[i];
    int gc=0;
    ilop(i,0,n)
    {  
         prf[i]=gc;
        gc=__gcd(gc,arr[i]);
      //  cout<<i<<" "<<gc<<endl;
    }
    //cout<<gc<<endl;
    if(gc>=r) 
    {
        cout<<gc<<endl;
        return;
    }
    prf[n]=gc;
    gc=0;
    for(int i=n-1;i>=0;i--)
    {
        suf[i]=gc;
        gc=__gcd(gc,arr[i]);
    }
    vi ans;
    int mx=0;
    ilop(i,0,n)
    {
        ans.push_back(__gcd(prf[i],suf[i]));
        mx=max(mx,ans[i]);
    }
    // cout<<mx<<"- ";
    int res=0;
    ilop(i,1,r+1)
    {  
         int tmp=__gcd(mx,i);
        if(tmp>res) res=tmp;
    }
    cout<<res<<endl;
    



}

 int tc=1;
signed main()
{
    akshay(); 
    //test(t){
        // cout<<"Case #"<<tc++<<": ";
solver();
//}
    return 0;
}