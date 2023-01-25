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
char find(string &str , int idx , vector<vi> & arr , int i)
{
    int n=str.size();
    if(idx<=n) return str[idx-1];
    if(idx<=arr[i][2])
    {
        return find(str,idx,arr,i-1);
    }
     int ni=arr[i][0]+(idx-arr[i][2]-1);
     return find(str,ni,arr,i-1);
}
void solver()
{
int n,c,q; 
 cin>>n>>c>>q;
 string str; cin>>str;
 vector<vi> arr;
 int len=str.size();
 ilop(i,0,c)
 {
    int l,r; cin>>l>>r;
    
    arr.push_back({l,r,len});
    len+=(r-l+1);
 }
 //ilop(i,0,c) cout<<arr[i][0]<<" "<<arr[i][1]<<" "<<arr[i][2]<<endl;
 while(q--)
 {
    int idx; cin>>idx;
  cout<<find(str,idx,arr,c-1)<<endl;
 }
//  for(int i=0;i<arr[c-1][2];i++) cout<<find(str,i+1,arr,c-1);
//  cout<<endl;
    
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