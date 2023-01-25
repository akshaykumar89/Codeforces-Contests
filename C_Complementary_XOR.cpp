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
void cnv(string &s)
{
    int n=s.size();
    ilop(i,0,n)
    {
        if(s[i]=='0') s[i]='1';
        else s[i]='0';
    }
    return ;
}
void print(vector<pii> & arr)
{
    int n=arr.size();
    cout<<n<<endl;
    ilop(i,0,n) cout<<arr[i].first<<" "<<arr[i].second<<endl;
}
void solver()
{
int n; 
 cin>>n;
    string a,b; cin>>a>>b;
    
   
    if(a==b)
    {    int n1=0;
         ilop(i,0,n) if(a[i]=='1') n1++;
        cout<<"YES\n";
        vector<pii> arr;
        ilop(i,0,n)
        {
            if(a[i]=='1') arr.push_back({i+1,i+1});

        }
        if(n1&1) arr.push_back({1,n});
       //  if(n1&1) arr.push_back({1,n});
       if(n1&1)  arr.push_back({1,1});
       if(n1&1)  arr.push_back({2,n});
        print(arr);
        return;
    }
    cnv(a);
    if(a==b)
    {     
       // cout<<a<<endl;
         int n1=0;
         ilop(i,0,n) if(a[i]=='1') n1++;
        cout<<"YES\n";
        vector<pii> arr;
        arr.push_back({1,n});
        ilop(i,0,n)
        {
            if(a[i]=='1') arr.push_back({i+1,i+1});

        }
        if(n1&1) arr.push_back({1,n});
        // if(n1&1) arr.push_back({1,n});
       if(n1&1)  arr.push_back({1,1});
       if(n1&1)  arr.push_back({2,n});
        print(arr);
        return;
    }
    cout<<"NO\n";

    

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