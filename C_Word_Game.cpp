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
   unordered_map<string,int> map;
   vector<string> m1(n),m2(n),m3(n);
    ilop(i,0,n) 
    {
        string str; cin>>str; m1[i]=str;
        map[str]++;
    }
    ilop(i,0,n) 
    {
        string str; cin>>str; m2[i]=str;
         map[str]++;
    }
    ilop(i,0,n) 
    {
        string str; cin>>str; m3[i]=str;
         map[str]++;
    }
    int s=0;
    ilop(i,0,n)
    {
        if(map[m1[i]]==1) s+=3;
        else if(map[m1[i]]==2) s+=1;
    }
    cout<<s<<" ";
    s=0;
    ilop(i,0,n)
    {
        if(map[m2[i]]==1) s+=3;
        else if(map[m2[i]]==2) s+=1;
    }
    cout<<s<<" ";
    s=0;
    ilop(i,0,n)
    {
        if(map[m3[i]]==1) s+=3;
        else if(map[m3[i]]==2) s+=1;
    }
    cout<<s<<"\n";

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