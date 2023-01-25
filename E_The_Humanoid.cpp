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
int n,h; 
 cin>>n>>h;
 take(a,n);
 sort(a.begin(),a.end());
 int g=2,b=1;
 int i=0;
 for(;i<n;i++)
 {
    if(h>a[i])
    {
        h+=(a[i]/2);
    }
    else{
        if(g>=1 and 2*h>a[i])
        {
            g--;
            h=2*h;
            h+=(a[i]/2);

        }
         if(b>=1 and 3*h>a[i])
        {
            b--;
            h=h*3;
            h+=(a[i]/2);
        }
        else if(g>=1 and 2*h>a[i])
        {
            g--;
            h=2*h;
            h+=(a[i]/2);

        }
        else if(g==2 and 4*h>a[i])
        {
              g=0;
              h=h*4;
              h+=(a[i]/2);
        }
        else if(g>=1 and b==1 and 6*h>a[i] )
        {
               g--;
               b--;
               h=h*6;
               h+=(a[i]/2);
        }
        else if(g==2 and b==1 and 12*h>a[i])
        {
              g=0;
              b=0;
              h=h*12;
              h+=(a[i]/2);
        }
        else break;
    }
 }
 cout<<i<<endl;
    
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