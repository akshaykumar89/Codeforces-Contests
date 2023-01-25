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

void abhay()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void fun(string &s,int &sum,int i,int n){
    unordered_map<char,int>m;
    int maxi=0;
    ilop(j,0,i){m[s[j]]++;maxi=max(maxi,m[s[j]]);}
    if(maxi<=m.size())sum++;
    ilop(j,i,n){
        m[s[j-i]]--;
        if(m[s[j-i]]==0)m.erase(s[j-i]);
        m[s[j]]++;
        maxi=0;
        ilop(k,j-i-1,j+1){maxi=max(maxi,m[s[k]]);}
        if(maxi<=m.size())sum++;
    }
}
void solver()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum=n;
    ilop(i,2,101){
        fun(s,sum,i,n);
    }
    cout<<sum<<endl;
}
int tc=1;
signed main()
{
    abhay(); 
    test(t){
        // cout<<"Case #"<<tc++<<": ";
solver();
}
    return 0;
}