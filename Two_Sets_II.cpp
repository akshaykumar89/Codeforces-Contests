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
int n; 
 cin>>n;
 int sum=(n*(n+1))/2;
 if(sum&1)
 {
    cout<<0<<endl;
    return;
 }
 int dp[sum+1];
 dp[0]=0;
 memset(dp,0,sizeof(dp));
 dp[0]=1;
//  sum=sum/2;
//  dp[1]=1;
 ilop(i,1,n)
 {  
    int dp2[sum+1];
    for(int s=0;s<=sum;s++)
    {
        if(s==0)
        {
            dp2[s]=1;
        }
        else if(s-i>=0) 
             dp2[s]=(dp[s-i]+dp[s])%mod;
             else dp2[s]=dp[s];
 
        //  cout<<dp[s]<<" ";
    }
    for(int s=0;s<=sum;s++)
    {
        dp[s]=dp2[s];
    }
    //  cout<<endl;
 }
 
 cout<<dp[sum/2]<<endl;
    
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