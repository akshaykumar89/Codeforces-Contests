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
int n; 
 cin>>n;
    take(a,n);
    int u1=0,u2=0,c=0;
    ilop(i,0,n)
    {
         if(a[i]!=i+1 and a[i]!=n-i)c++;
         else if(a[i]!=i+1) u1++;
         else if(a[i]!=n-i) u2++;
    }
    // cout<<u1<<" "<<c<<" "<<u2<<endl;
    int mn=min(u1,u2);
    u1-=mn;
    u2-=mn;
    if(u1==0)
    {
        if(u2>=c)
        {
            cout<<"First\n";
        }
        else cout<<"Tie\n";
    }
    else{
        if(u1>c)
        {
            cout<<"Second\n";
        }
        else cout<<"Tie\n";
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