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
vi decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    vi ans;
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            ans.pb(1);
        else
            ans.pb(0);
    }
    return ans;
}
void solver()
{
int n,y; 
 cin>>n>>y;
 take(a,n);
 int xr=0;
 ilop(i,0,n) xr=(xr|a[i]);
//  cout<<(xr|8)<<endl;

 vi b=decToBinary(xr);
//  ilop(i,0,32) cout<<b[i]<<" ";
//  cout<<endl;
 vi c=decToBinary(y);
 vi ans;
//  ilop(i,0,32) cout<<c[i]<<" ";
//  cout<<endl;
 //cout<<(xr&y)<<endl;
 ilop(i,0,32)
 {
    if(b[i]==0 and c[i]==1)
    {
        ans.push_back(1);
    }
    else if(b[i]==1 and c[i]==1) ans.push_back(0);
    else if(b[i]==0 and c[i]==0) ans.push_back(0);
    else 
    {
        cout<<-1<<endl;
        return;
    }
 }
//  ilop(i,0,32) cout<<ans[i]<<" ";
//  cout<<endl;
 int res=0;
 for(int i=31;i>=0;i--)
 {
    res+=ans[i]*pow(2,31-i);
 }
 cout<<res<<endl;
    
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