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
 take(a,n);
 int dp[n+1][m+1];
//  memset(dp,0,sizeof(dp));
ilop(i,0,n+1) ilop(j,0,m+1) dp[i][j]=0;
 if(a[0]==0)
 {
    ilop(i,1,m+1) dp[0][i]=1;
 }
 else dp[0][a[0]]=1;
 for(int i=1;i<n;i++)
 {    
        if(a[i]!=0)
        {
            int op1=a[i]-1>=0?dp[i-1][a[i]-1]:0;
            int op2=a[i]+1<=m?dp[i-1][a[i]+1]:0;
            int op3=dp[i-1][a[i]];
            dp[i][a[i]]=op1+op2+op3;
            continue;
        }
      for(int j=1;j<=m;j++)
      {
            int op1=j-1>=0?dp[i-1][j-1]:0;
            // cout<<op1<<endl;
            int op2=j+1<=m?dp[i-1][j+1]:0;
            int op3=dp[i-1][j];
            dp[i][j]+=(op1+op2+op3);
            dp[i][j]%=mod;
      }
 }

 int sum=0;
//  cout<<dp[2][0]<<endl;
 ilop(i,0,m+1) sum+=dp[n-1][i];
 cout<<sum%mod;
    
}

 int tc=1;
signed main()
{
    akshay(); 
   
        // cout<<"Case #"<<tc++<<": ";
solver();

    return 0;
}