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
int n,money; 
 cin>>n>>money;
 take(price,n);
 take(value,n);
int dp[n+1][money+1];
for(int i =0 ;i<=n;i++ )
{    
     for(int j=0 ; j<=money  ; j++)
     {
           if(i==0 or j==0) dp[i][j]=0;
           else if(j-price[i-1]>=0)
           {
            dp[i][j]=max(dp[i-1][j],value[i-1]+dp[i-1][j-price[i-1]]);
           } 
           else dp[i][j]=dp[i-1][j];
           cout<<i<<j<<endl;
     }
}
cout<<dp[1][4]<<endl;
//cout<<dp[n][money];

    
}

 int tc=1;
signed main()
{
    akshay(); 
   
        // cout<<"Case #"<<tc++<<": ";
solver();

    return 0;
}