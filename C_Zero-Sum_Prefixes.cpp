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
 int count_max(mii & mp)
 {
    int ans=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {   
        //cout<<it->first<<" "<<it->second<<" \n";
        ans=max(ans,it->second);
    }
    //cout<<"cnt "<<ans<<endl;
    return ans;
 }
void solver()
{
int n; 
 cin>>n;
    take(a,n);
    int sum=0;
    mii mp;
    int ans=0;
    int st=-1;
    int i=0;
    while(a[i]!=0)
    {
      sum+=a[i];
      if(sum==0) ans++;
      i++;
    }
    i++;
    mp[sum]++;
    for( ;i<n;i++)
    {
        sum+=a[i];
        if(a[i]!=0)
        mp[sum]++;
        if(a[i]==0 or i==n-1)
        {
            ans+=count_max(mp);
            mp.clear();
            mp[sum]++;
        }
    }
    if(a[n-1]==0) ans++;
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