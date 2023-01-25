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
void bs(vi & ed , vi &cst , int s , int e , int c)
{
    int i=0;
    int j=ed.size()-1;
    int idx=upper_bound(ed.begin(),ed.end(),s)- ed.begin()-1;
    // cout<<idx<<" ";
    int t_c= c + cst[idx];
    // cout<<t_c<<" "<<e<<endl;
    if(cst[j]<t_c)
    {
        ed.pb(e);
        cst.pb(t_c);
    }
}
void solver()
{
int n; 
 cin>>n;
 vi end,cst;
 vector<vi> data;
 ilop(i,0,n)
 {
    int s,e,c;
    cin>>s>>e>>c;
    data.push_back({e,s,c});
 }
 sort(data.begin(),data.end());
 end.pb(0);
 cst.pb(0);
 for(vi k : data)
 {
    int s,e,c;
    s=k[1];
    e=k[0];
    c=k[2];
    bs(end,cst,s-1,e,c); 
 }
 int j=cst.size()-1;
 cout<<cst[j]<<endl;

 
    
}

 int tc=1;
signed main()
{
    akshay(); 
    
        // cout<<"Case #"<<tc++<<": ";
solver();

    return 0;
}