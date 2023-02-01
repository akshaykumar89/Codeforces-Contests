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
/////////////////////////////////////////
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
//////////////////////////////////////////
void akshay()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void combinationUtil(int arr[], int n, int r,
                     int index, int data[], int i);
int mx;
string a,b;
map<int,int> cmap;
int calc( )
{
   int ans=0;
    int len=0;
    int n=a.size();
    ilop(i,0,n)
    {
       if(a[i]==b[i] or cmap[a[i]-'a']>=1) len++;
       else{
            ans+= len*(len+1)/2;
             len=0;
       }
    }
     ans+= len*(len+1)/2;
     return ans;
}
void printCombination(int arr[], int n, int r)
{
   
   
    int data[r];
    combinationUtil(arr, n, r, 0, data, 0);
}
  

void combinationUtil(int arr[], int n, int r, int index,
                     int data[], int i)
{
   
    if (index == r) {
        for (int j = 0; j < r; j++)
        cmap[data[j]]++;
        //     cout <<" "<< data[j];
        // cout <<"\n";
       mx=max(mx,calc());
       cmap.clear();
        return;
    }
  
  
    if (i >= n)
        return;
  
    
    data[index] = arr[i];
    combinationUtil(arr, n, r, index + 1, data, i + 1);
  
    combinationUtil(arr, n, r, index, data, i + 1);
}

void solver()
{
int n,k; 
 cin>>n>>k;
//  string a,b;
 cin>>a>>b;
 mx=0;
 set<char> st;
 ilop(i,0,n)
 {
    st.insert(a[i]);
 }
 int arr[st.size()];
 int idx=0;
 if(k>=st.size())
 {  int len=n;
    cout<<len*(len+1)/2<<endl;
    return;
 }
 for(auto it:st)
 {
     arr[idx++]=it-'a';
 }
 printCombination(arr,st.size(),k);
 cout<<mx<<endl;


    
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
