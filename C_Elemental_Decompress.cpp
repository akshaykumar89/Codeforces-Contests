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
    vi b(n),c(n);
    mii mp;
    map<int,vi> mp2;
    ilop(i,0,n)
    {
        mp[a[i]]++;
        if(mp[a[i]]==3) 
        {
            cout<<"NO\n";
            return;
        }
        mp2[a[i]].pb(i);

    }
    vi left;
    ilop(i,1,n+1)
    {
        if(mp.count(i)==0)
        {
            left.pb(i);
        }
    }
    sort(left.begin(),left.end());
     
    int idx=0;

    ilop(i,0,n)
    {
       if(mp[a[i]]==1)
       {
          b[i]=a[i];
          c[i]=a[i];
          mp.erase(a[i]);
       }
       
    }
    for(auto it=mp2.begin();it!=mp2.end();it++)
    {
        if(it->second.size()==2)
        {
            int id1=it->second[0]; 
            int id2=it->second[1];
            if(left[idx]<a[id1])
            {
                
                b[id1]=left[idx];
                c[id1]=a[id1];
                c[id2]=left[idx];
                b[id2]=a[id2];
                idx++;
            } 
            else{
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
    ilop(i,0,n) cout<<b[i]<<" ";
    cout<<endl;
    ilop(i,0,n) cout<<c[i]<<" ";
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