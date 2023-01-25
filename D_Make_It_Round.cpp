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
 int n2=0;
 int n5=0;
 int tmp=n;
 while(tmp%2==0  and tmp>0)
 {
    n2++;
    tmp=tmp/2;
 }
 tmp=n;
 while(tmp%5==0 and tmp>0)
 {
    n5++;
    tmp=tmp/5;
 }
 int ans=1;
 
//  if (n2 > n5) n2 -= n5;
//  else n5 -= n2;
int mn=min(n2,n5);
n2-=mn;
n5-=mn;
 int cnt=0;
 //cout<<ans<<endl;
 while((ans*5)<=m and cnt<n2)
 {
    ans=ans*5;
    cnt++;  
 }
 cnt=0;
 

 while((ans*2)<=m and cnt<n5)
 {
    ans=ans*2;
    cnt++;
 }
 while((ans*10)<=m)
 {
    ans=ans*10;
 }
  ans=ans*(m/ans);
  cout<<n*ans<<endl;

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