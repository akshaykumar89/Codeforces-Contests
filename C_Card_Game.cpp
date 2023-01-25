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
int NcR(int n, int r)
{
 
    
    long long p = 1, k = 1;
 
   
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
          
            long long m = __gcd(p, k);
 
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        
    }
 
    else
        p = 1;
 
   return p;
}
void solver()
{
int n; 
 cin>>n;
 if(n==2)
 {
    cout<<1<<" "<<0<<" 1"<<endl;
    return;
 }
    vector<vi> dp(n);
    dp[1]={1,0,1};
    dp[2]={3,2,1};
    for(int i=2;i<=n/2;i++)
    {
        int num=2*i;
       int a=NcR(num-1,(num/2)-1) +dp[i-1][1];
       int total = NcR(num,num/2);
       int b=total-a-1;
       dp[i]={a,b,1};
    }
    cout<<dp[n/2][0]%mod<<" "<<dp[n/2][1]%mod<<" "<<dp[n/2][2]%mod<<endl;

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