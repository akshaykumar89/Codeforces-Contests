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
int calc(string &s)
{
    int ans=0;
    int n=s.size();
    ilop(i,0,n-1)
    {
        string str=s.substr(i,2);
        ans+=stoi(str)*1ll;
    }
    return ans;
}
void solver()
{
int n,k; 
 cin>>n>>k;
 string s ; cin>>s;
 int p=-1,q;
 ilop(i,0,n)
 {
    if(s[i]=='1')
    {
        if(p==-1) p=i;
        q=i;
    }
 }
 if(p==-1){
    cout<<calc(s)<<endl;
    return;
 }
  //cout<<p<<" "<<q<<endl;
  q=(n-1-q);
 
//   cout<<" q "<<q<<endl;
//   cout<<" p "<<p<<endl;
 if(k>=q)
 {
    swap(s[n-1],s[n-1-q]);
     k-=q;
 }
 if( k>=p)
 {  
    if(p!=n-1)
    swap(s[0],s[p]);
    
 }
 //cout<<s<<endl;
 cout<<calc(s)<<endl;
    
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