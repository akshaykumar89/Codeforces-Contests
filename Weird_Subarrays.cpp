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
 int n; 
 cin>>n;
 vi a(n);
 ilop(i,0,n) cin>>a[i];
 vi res;
 int inc=1,dec=1;
 ilop(i,1,n)
 {  

    if(a[i]>a[i-1])
    {   
        if(dec!=0)
        {
            res.push_back(-dec);
            inc=1;
        }
        inc++;
        dec=0;
    }
    else{
        if(inc!=0)
        {
            res.push_back(inc);
            dec=1;
        }
        dec++;
        inc=0;
    }
 }
 if(inc) res.push_back(inc);
 if(dec) res.push_back(-dec);

 int m=res.size();
 vi nres;

 ilop(i,1,m) {
   // cout<<res[i]<<" ";
    if(i==m-1)
    {
        nres.push_back(abs(res[i]));
        continue; 
    }
       if(res[i]<0 and res[i+1]>0)
        {
            nres.push_back(abs(res[i])+abs(res[i+1])-1);
            i++;
           // continue;
        }
        else{
            nres.push_back(abs(res[i]));
        }
 }
 //cout<<endl;
 m=nres.size();
 int ans=0;
  ilop(i,0,m) {

    //cout<<nres[i]<<" ";
    int tmp=(nres[i]*(nres[i]+1))/2;
    ans+=tmp;
    }
    ans-=m-1;
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