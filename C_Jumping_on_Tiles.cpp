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
    string s;cin>>s;
    vector<pair<char,int>> arr;
    int n=s.size();
    ilop(i,0,n)
    {
        arr.push_back({s[i],i+1});
    }
    sort(arr.begin(),arr.end());
    string ans="";
    int cnt=0;
    if(s[0]>s[n-1])
    {   
        for(int i=n-1;i>=0;i--)
        {   
            if(arr[i].first<=s[0] and arr[i].first>=s[n-1])
           { 
              if(arr[i].second==1 or arr[i].second==n) continue;
             ans+=to_string(arr[i].second);
             ans+=" ";
             cnt++;
            }
        }
    }
    else{
        for(int i=0;i<n;i++)
        {
            if(arr[i].first>=s[0] and arr[i].first<=s[n-1])
            {
                if(arr[i].second==1 or arr[i].second==n) continue;
            ans+=to_string(arr[i].second);
            ans+=" ";
            cnt++;
            }
        }
     
    }
    cout<<abs(s[n-1]-s[0])<<" "<<cnt+2<<endl;
    cout<<1<<" "<<ans<<n<<endl;
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