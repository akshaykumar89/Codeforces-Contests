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
int num(int n, int dig)
{   int ans=n;
    dig--;
    while(dig--)
    {
      ans=(ans*10)+n;
    }
    return ans;
}
void solver()
{
int n; 
 cin>>n;
    int dig=0;
    int tmp=n;
    int mn=11;
    while(tmp>0)
    {
        mn=min(mn,tmp%10);
        dig++;
        tmp/=10;
    }
      int ans=0;
    for(int i=1;i<=9;i++)
    {
        if(num(i,dig)<=n) ans++;
        else break;
    }
    ans+=(dig-1)*9;
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