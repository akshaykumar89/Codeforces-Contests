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
int n,q; 
 cin>>n>>q;
 vi arr(n,0);
 unordered_map<int,int> map;
  ilop(i,0,n) {cin>>arr[i];
 map[arr[i]]=i;}
 vi win(n+1,0);
 int mx=max(arr[0],arr[1]);
 win[mx]++;
ilop(i,2,n)
{
    mx=max(mx,arr[i]);
    win[mx]++;
}

while (q--)
{
    int a,k;
    cin>>a>>k;
    a--;
    if(arr[a]==mx)
    {
        if(map[mx]==0) cout<<k<<endl;
        else{
            int ans=k-(map[mx]-1);
            cout<<max(0*1ll,ans)<<endl;
        } 
    }
    else 
    {
        if(a==0)
        {  
           // cout<<k<<" "<<win[arr[a]]<<endl;
            cout<<min(k,win[arr[a]])<<endl;
        }
        else{
            k=k-(a-1);
            if(k<0) cout<<0<<endl;
            else{
                cout<<min(k,win[arr[a]])<<endl;
            }
        }
    }
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