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
int cnt(vi & a , int s , int e)
{
   int num=e-s;
   sort(a.begin()+s , a.begin()+s+num+1);
   int sum=0;
   ilop(i,s+1,e+1)
   {
     sum+=a[i];
   }
//    cout<<s<<" "<<e<<endl;
//    cout<<"sum "<<sum<<endl;
   return sum;
}
void solver()
{
int n; 
 cin>>n;
    string s; cin>>s;
    s+="0";
    vi a(n+1);
    ilop(i,0,n) cin>>a[i];
    a[n]=0;
    int ans=0;
    int st=-1,e=-1;
    ilop(i,0,n)
    {  
       if(st==-1 and s[i]=='1'){ ans+=a[i];
       continue;
       }
       if(s[i]=='0' and s[i+1]=='1')
       {
           st=i;
       }
       if(s[i]=='1' and s[i+1]=='0')
       {
         e=i;
         ans+=cnt(a,st,e);
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