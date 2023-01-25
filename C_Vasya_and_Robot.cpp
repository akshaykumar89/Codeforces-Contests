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
int x2,y2;
bool check(string &s , int a , int b , int sz)
{
   int n=s.size(); 
   int x=x2;
   int y=y2; 
    ilop(i,0,sz)
    {
        if(s[i]=='R')x--;
        else if(s[i]=='L')x++;
        else if(s[i]=='U')y--;
        else y++;
    }
    int i=0,j=sz;
    while(j<=n)
    {
        int dif=abs(a-x)+abs(b-y);
        if(dif<=sz)
        {
            return true;
        }
        if(s[j]=='R')x--;
        else if(s[j]=='L')x++;
        else if(s[j]=='U')y--;
        else y++;

        if(s[i]=='R')x++;
        else if(s[i]=='L')x--;
        else if(s[i]=='U')y++;
        else y--;
        i++;
        j++;
    }
   return false;
    
}
void solver()
{
int n; 
 cin>>n;
    string s; cin>>s;
    int a,b; cin>>a>>b;
    int tmp=a+b;
    if(tmp&1 and n%2==0)
    {
        cout<<-1<<endl;
        return;
    }
    if(n&1 and tmp%2==0)
    {
        cout<<-1<<endl;
        return;
    }
    x2=0;
    y2=0;
    ilop(i,0,n)
    {
        if(s[i]=='R')x2++;
        else if(s[i]=='L')x2--;
        else if(s[i]=='U')y2++;
        else y2--;
    }
    if(x2==a and y2==b)
    {
        cout<<0<<endl;
        return;
    }
    // ilop(i,1,n+1)
    // {
    //      cout<<check(s,a,b,i)<<" "<<i<<endl;
    // }
    int i=1;
    int j=n;
    int ans=-1;
    while(i<=j)
    {
       int m=(i+j)/2;
       if(check(s,a,b,m))
       {
        ans=m;
        j=m-1;
       }
       else{
        i=m+1;
       }
       
    }
    cout<<ans<<endl;
    
}

 int tc=1;
signed main()
{
    akshay(); 
    //test(t){
        // cout<<"Case #"<<tc++<<": ";
solver();
// }
    return 0;
}