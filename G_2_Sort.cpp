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
int n,k; 
 cin>>n>>k;
 k++;
 vi arr(n,0); ilop(i,0,n) cin>>arr[i];
 vi seq(n,0);
 ilop(i,0,n-1)
 {
    if(arr[i]<2*arr[i+1]) seq[i]=1;
 }
 seq[n-1]=1;
 int cnt=0;
 int ans=0;
 ilop(i,0,k) if(seq[i]==1) cnt++;
 if(cnt==k ) ans++;
 if(cnt==k-1 && seq[k-1]==0) ans++; 
 
 //cout<<cnt<<" ans 1 "<<ans<<endl;
 int i=0;
 int j=k;
 while(j<n)
 {
    if(seq[i]==1) cnt--;
    if(seq[j]==1) cnt++;
    if(cnt==k) ans++;
    if(cnt==k-1 && seq[j]==0) ans++;
    i++;
    j++;
    //cout<<" ans  2 "<<ans<<endl;
    //if(cnt==k) ans++;
 }
//  ilop(i,0,n) cout<<seq[i]<<" ";
//  cout<<endl;
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