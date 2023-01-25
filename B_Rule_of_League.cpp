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
int n,x,y; 
 cin>>n>>x>>y;
 if(x==0 and y==0)
 {
    cout<<-1<<endl;
    return;
 }
 if(x && y)
 {
    cout<<-1<<endl;
    return;
 }

 int a=max(x,y);
 int tmp=n-1;
 if((n-1)%a!=0)
 {   
    cout<<-1<<endl;
    return;
 }

 int st=1;
 int cnt=0;
 for(int i=0;i<n-1;i++)
 {
      cout<<st<<" ";
      cnt++;
      if(cnt==a)
      {
        cnt=0;
        if(st==1) st++;
        st+=a;
        //st++;
      }
 }
 cout<<endl;
    
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