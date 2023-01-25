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
void remove(vi & a , vi& b)
{
    mii mp;
    vi tmpa,tmpb;
    int n=a.size();
    ilop(i,0,n)
    {
       mp[a[i]]++;
    }
    ilop(i,0,n)
    {
       if(mp[b[i]]>0) mp[b[i]]--;
       else tmpb.push_back(b[i]);
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        while(it->second>0)
        {
            tmpa.push_back(it->first);
            it->second--;
        }
    }
    a=tmpa;
    b=tmpb;
}
int cnt(int &n)
{
     int ans=0;
     while(n>0)
     {
        ans++;
        n=n/10;
     }
     return ans;
}
void solver()
{
int n; 
 cin>>n;
    vi a(n), b(n);
    ilop(i,0,n) cin>>a[i];
    ilop(i,0,n) cin>>b[i];
    remove(a,b);
    int ans=0;
    n=a.size();
    ilop(i,0,n)
    {
        if(a[i]>9) 
        {
            ans++;
            a[i]=cnt(a[i]);
        }
        if(b[i]>9)
        {
            ans++;
            b[i]=cnt(b[i]);
        }
    }
    remove(a,b);
    n=a.size();
    ilop(i,0,n)
    {
        if(a[i]!=1) ans++;
        if(b[i]!=1) ans++;
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