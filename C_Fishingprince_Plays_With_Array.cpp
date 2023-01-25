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
vector<pii> slv(vector<int> & arr , int m)
{
     int n=arr.size();
     vector<pii> ans;
     ilop(i,0,n)
     {  
        if(m==1)
        {
            ans.push_back({1,arr[i]});
            continue;
        }
        int an=1;
        int cnt=1;
        while(arr[i]%m==0)
        {
            an=cnt*m;
            cnt=an;
            arr[i]/=m;
        }
        ans.push_back({arr[i],an});
     }
     return ans;
}
vector<pii> comb(vector<pii> & arr)
{
    vector<pii> ans;
    int n=arr.size();
    ans.push_back(arr[0]);
    ilop(i,1,n)
    {
        if(ans.back().first==arr[i].first)
        {
            ans.back().second+=arr[i].second;
        }
        else ans.push_back(arr[i]);
    }
    return ans;
}
void solver()
{
int n,m; 
 cin>>n>>m;
 vector<int> arr1 ;
 ilop(i,0,n)
 {
    int a; cin>>a;
     arr1.push_back(a);
 }
 int n2;cin>>n2;
 vector<int> arr2;
 ilop(i,0,n2) {
     int a; cin>>a;
     arr2.push_back(a);
 }
 vector<pii> p1,p2;
 p1=slv(arr1,m);
 p2=slv(arr2,m);
// ilop(i,0,p2.size()) cout<<p2[i].first<<" -- "<<p2[i].second<<"\n";
// cout<<endl;
// cout<<endl;
// cout<<endl;
p1=comb(p1);
p2=comb(p2);
if(p1==p2)
{
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}




    
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